/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:28:41 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/29 20:11:50 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ph.h"

void	*single_philo(void *index)
{
	t_ph	*philo;

	philo = (t_ph *)index;
	wait_all_threads(philo->data);
	set_long(&philo->ph_mutex, &philo->meal_time, gettime(MILLISECONDS));
	count_active_threads(&philo->data->access_mutex,
		&philo->data->active_philos_count);
	print_status(TAKES_LEFTFORK, philo);
	while (!get_b(&philo->data->access_mutex, &philo->data->end_time))
		ft_usleep(200, philo->data);
	return (NULL);
}

static void	assign_forks(t_ph *philo, t_fork *forks_arr, int ph_index)
{
	int	ph_total;

	ph_total = philo->data->ph_total;
	if (philo->ph_id % 2 != 0)
	{
		philo->left_fork = &forks_arr[(ph_index + 1) % ph_total];
		philo->right_fork = &forks_arr[ph_index];
	}
	if (philo->ph_id % 2 == 0)
	{
		philo->left_fork = &forks_arr[ph_index];
		philo->right_fork = &forks_arr[(ph_index + 1) % ph_total];
	}
}

static void	philo_init(t_data *data)
{
	int		i;
	t_ph	*philo;

	i = 0;
	while (i < data->ph_total)
	{
		philo = data->philos_arr + i;
		philo->ph_id = i + 1;
		philo->max_meals = false;
		philo->meal_count = 0;
		handle_mutex(&philo->ph_mutex, INIT);
		philo->data = data;
		assign_forks(philo, data->forks_arr, i);
		i++;
	}
}

void	init_struct(t_data *data)
{
	int	i;

	i = 0;
	data->end_time = false;
	data->threads_ready = false;
	data->active_philos_count = 0;
	data->philos_arr = ft_malloc(data->ph_total * sizeof(t_ph));
	data->forks_arr = ft_malloc(data->ph_total * sizeof(t_fork));
	handle_mutex(&data->write_mutex, INIT);
	handle_mutex(&data->access_mutex, INIT);
	while (i < data->ph_total)
	{
		handle_mutex(&data->forks_arr[i].fork_mutex, INIT);
		data->forks_arr[i].fork_id = i;
		i++;
	}
	philo_init(data);
}
