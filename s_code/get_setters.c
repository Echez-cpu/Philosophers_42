/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_setters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:06:23 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/29 20:06:25 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ph.h"

void	setters_b(t_mtx *mutex, bool *dst, bool value)
{
	handle_mutex(mutex, LOCK);
	*dst = value;
	handle_mutex(mutex, UNLOCK);
}

bool	get_b(t_mtx *mutex, bool *value)
{
	bool	retrieved;

	handle_mutex(mutex, LOCK);
	retrieved = *value;
	handle_mutex(mutex, UNLOCK);
	return (retrieved);
}

void	set_long(t_mtx *mutex, long *dst, long value)
{
	handle_mutex(mutex, LOCK);
	*dst = value;
	handle_mutex(mutex, UNLOCK);
}

long	get_long(t_mtx *mutex, long *value)
{
	long	retrieve;

	handle_mutex(mutex, LOCK);
	retrieve = *value;
	handle_mutex(mutex, UNLOCK);
	return (retrieve);
}
