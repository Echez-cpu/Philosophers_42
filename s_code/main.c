/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:54:26 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/29 20:11:54 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ph.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 5 || argc == 6)
	{
		data.error_flag = 0;
		process_param(&data, argv);
		if (!data.error_flag)
		{
			init_struct(&data);
			start_s(&data);
			free_me(&data);
		}
		else
			return (1);
	}
	else
		error_msg("Input Error\n" YELLOW "Please enter:"
			"./philo <no. of philos> <time_to_die> "
			"<time_to_eat> <time_to_sleep> <max_meals> (optional)\n"
			"For example: ./philo 2 700 200 200 8" RESET);
	return (0);
}
