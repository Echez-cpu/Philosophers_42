/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:56:43 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/30 13:07:40 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ph.h"

void	print_status(t_ph_status status, t_ph *philo)
{
	long	elapsed;
	bool	end_time;

	elapsed = gettime(MILLISECONDS) - philo->data->start_time;
	if (get_b(&philo->ph_mutex, &philo->max_meals))
		return ;
	else
	{
		handle_mutex(&philo->data->write_mutex, LOCK);
		end_time = get_b(&philo->data->access_mutex, &philo->data->end_time);
		if ((status == TAKES_LEFTFORK || status == TAKES_RIGHTFORK)
			&& !end_time)
			printf(CYAN"%-5ld %d has taken a fork\n", elapsed,
				philo->ph_id);
		else if (status == EATING && !end_time)
			printf(WHITE"%-5ld"GREEN"%d is eating\n" RESET, elapsed,
				philo->ph_id);
		else if (status == SLEEPING && !end_time)
			printf(WHITE"%-5ld"RESET"%d is sleeping\n", elapsed, philo->ph_id);
		else if (status == THINKING && !end_time)
			printf(YELLOW"%-5ld %d is thinking\n", elapsed, philo->ph_id);
		else if (status == DIED)
			printf(RED "%-5ld %d died\n" RESET, elapsed, philo->ph_id);
	}
	handle_mutex(&philo->data->write_mutex, UNLOCK);
}
