/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads_mutex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:35:42 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/29 18:52:27 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ph.h"

static void	mutex_error_check(int status, t_ftcode ftcode)
{
	if (status != 0 && (ftcode == LOCK || ftcode == UNLOCK || ftcode == INIT
			|| ftcode == DESTROY))
	{
		error_msg("Mutex error");
		return ;
	}
}

static void	thread_error_check(int status, t_ftcode ftcode)
{
	if (status != 0 && (ftcode == CREATE || ftcode == JOIN || ftcode == DETACH))
	{
		error_msg("Thread error");
		return ;
	}
}

void	handle_mutex(t_mtx *mtx, t_ftcode ftcode)
{
	if (ftcode == LOCK)
		mutex_error_check(pthread_mutex_lock(mtx), ftcode);
	else if (ftcode == UNLOCK)
		mutex_error_check(pthread_mutex_unlock(mtx), ftcode);
	else if (ftcode == INIT)
		mutex_error_check(pthread_mutex_init(mtx, NULL), ftcode);
	else if (ftcode == DESTROY)
		mutex_error_check(pthread_mutex_destroy(mtx), ftcode);
	else
	{
		error_msg("it should never enter here.1");
		return ;
	}
}

void	handle_thread(pthread_t *thread_info, void *(*foo)(void *),
		void *t_data, t_ftcode ftcode)
{
	if (ftcode == CREATE)
		thread_error_check(pthread_create(thread_info, NULL, foo, t_data),
			ftcode);
	else if (ftcode == JOIN)
		thread_error_check(pthread_join(*thread_info, NULL), ftcode);
	else if (ftcode == DETACH)
		thread_error_check(pthread_detach(*thread_info), ftcode);
	else
	{
		error_msg("it should never enter here.c");
		return ;
	}
}
