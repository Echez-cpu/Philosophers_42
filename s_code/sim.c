/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sim.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:09:00 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/29 20:07:02 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ph.h"

static void	thinking(t_ph *philo, bool pre_simulation)
{
	long	eating_time;
	long	sleeping_time;
	long	thinking_time;

	if (!pre_simulation)
		print_status(THINKING, philo);
	if (philo->data->ph_total % 2 == 0)
		return ;
	eating_time = philo->data->time_to_eat;
	sleeping_time = philo->data->time_to_sleep;
	thinking_time = (eating_time * 2) - sleeping_time;
	if (thinking_time < 0)
		thinking_time = 0;
	ft_usleep(thinking_time * 0.4, philo->data);
}

static void	synchronize_dining(t_ph *philo)
{
	if (philo->ph_id % 2 == 0)
		ft_usleep(40000, philo->data);
	else
		thinking(philo, true);
}

static void	eating(t_ph *philo)
{
	handle_mutex(&philo->left_fork->fork_mutex, LOCK);
	print_status(TAKES_LEFTFORK, philo);
	handle_mutex(&philo->right_fork->fork_mutex, LOCK);
	print_status(TAKES_RIGHTFORK, philo);
	set_long(&philo->ph_mutex, &philo->meal_time, gettime(MILLISECONDS));
	philo->meal_count++;
	print_status(EATING, philo);
	ft_usleep(philo->data->time_to_eat, philo->data);
	if (philo->data->meals_total > 0
		&& philo->meal_count == philo->data->meals_total)
		setters_b(&philo->ph_mutex, &philo->max_meals, true);
	handle_mutex(&philo->left_fork->fork_mutex, UNLOCK);
	handle_mutex(&philo->right_fork->fork_mutex, UNLOCK);
}

static void	*dining_philos(void *ph_data)
{
	t_ph	*philo;

	philo = (t_ph *)ph_data;
	wait_all_threads(philo->data);
	set_long(&philo->ph_mutex, &philo->meal_time, gettime(MILLISECONDS));
	count_active_threads(&philo->data->access_mutex,
		&philo->data->active_philos_count);
	synchronize_dining(philo);
	while (!get_b(&philo->data->access_mutex, &philo->data->end_time))
	{
		if (get_b(&philo->ph_mutex, &philo->max_meals))
			break ;
		eating(philo);
		print_status(SLEEPING, philo);
		ft_usleep(philo->data->time_to_sleep, philo->data);
		thinking(philo, false);
	}
	return (NULL);
}

void	start_s(t_data *data)
{
	int	i;

	i = 0;
	if (data->meals_total == 0)
		return ;
	else if (data->ph_total == 1)
		handle_thread(&data->philos_arr[0].ph_thread, single_philo,
			&data->philos_arr[0], CREATE);
	else
	{
		while (i < data->ph_total)
		{
			handle_thread(&data->philos_arr[i].ph_thread, dining_philos,
				&data->philos_arr[i], CREATE);
			i++;
		}
	}
	handle_thread(&data->death_check, confirm_death, data, CREATE);
	data->start_time = gettime(MILLISECONDS);
	setters_b(&data->access_mutex, &data->threads_ready, true);
	i = 0;
	while (i < data->ph_total)
		handle_thread(&data->philos_arr[i++].ph_thread, NULL, NULL, JOIN);
	setters_b(&data->access_mutex, &data->end_time, true);
	handle_thread(&data->death_check, NULL, NULL, JOIN);
}
