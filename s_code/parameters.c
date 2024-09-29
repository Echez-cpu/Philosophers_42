/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:49:56 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/29 19:19:56 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ph.h"

static long	ft_atol(const char *str)
{
	long	res;
	int		i;
	int		y;

	i = 0;
	res = 0;
	while ((str[i] == '+' || str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	y = i;
	if (str[i] == '-')
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-200);
		i++;
	}
	while (str[y] >= '0' && str[y] <= '9')
		res = (res * 10) + (str[y++] - '0');
	return (res);
}

static long	check_int_range(t_data *data, char *argv)
{
	long	input;

	input = ft_atol(argv);
	if (input == -200)
	{
		error_msg("Input Error: Digit values only");
		data->error_flag = 1;
	}
	if (input > INT_MAX)
	{
		error_msg("Input Error: The value cannot exceed 2147483647");
		data->error_flag = 1;
	}
	if (input < 1 && input != -200)
	{
		error_msg("Input Error: Positive values only");
		data->error_flag = 1;
	}
	return (input);
}

void	process_param(t_data *data, char **argv)
{
	data->ph_total = check_int_range(data, argv[1]);
	if (data->ph_total > PH_MAX || data->ph_total < 1)
	{
		error_msg("Input Error: Total number of philos must be btw 1 - 200");
		data->error_flag = 1;
	}
	data->time_to_die = check_int_range(data, argv[2]) * 1000;
	data->time_to_eat = check_int_range(data, argv[3]) * 1000;
	data->time_to_sleep = check_int_range(data, argv[4]) * 1000;
	if (data->time_to_die < 60000 || data->time_to_sleep < 60000
		|| data->time_to_eat < 60000)
	{
		error_msg("Input Error: Each of the 'time_to' values must exceed 60");
		data->error_flag = 1;
	}
	if (argv[5])
		data->meals_total = check_int_range(data, argv[5]);
	else
		data->meals_total = -1;
}
