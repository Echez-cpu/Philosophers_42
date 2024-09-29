/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:14:08 by pokpalae          #+#    #+#             */
/*   Updated: 2024/09/29 20:11:46 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_H
# define PH_H

# include <limits.h>
# include <pthread.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <unistd.h>

# define PH_MAX 200

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"

typedef struct s_data	t_data;

typedef pthread_mutex_t	t_mtx;

typedef struct s_fork
{
	t_mtx				fork_mutex;
	int					fork_id;
}						t_fork;

typedef struct s_ph
{
	int					ph_id;
	long				meal_count;
	bool				max_meals;
	long				meal_time;
	pthread_t			ph_thread;
	t_fork				*left_fork;
	t_fork				*right_fork;
	t_mtx				ph_mutex;
	t_data				*data;
}						t_ph;

typedef struct s_data
{
	long				ph_total;
	long				time_to_die;
	long				time_to_eat;
	long				time_to_sleep;
	long				meals_total;
	long				start_time;
	bool				end_time;
	bool				threads_ready;
	long				active_philos_count;
	bool				error_flag;
	pthread_t			death_check;
	t_fork				*forks_arr;
	t_ph				*philos_arr;
	t_mtx				access_mutex;
	t_mtx				write_mutex;
}						t_data;

typedef enum s_status
{
	THINKING,
	TAKES_LEFTFORK,
	TAKES_RIGHTFORK,
	EATING,
	SLEEPING,
	DIED,
}						t_ph_status;

typedef enum s_time_unit
{
	SECONDS,
	MILLISECONDS,
	MICROSECONDS,
}						t_time_unit;

typedef enum s_ftcode
{
	INIT,
	CREATE,
	LOCK,
	UNLOCK,
	JOIN,
	DETACH,
	DESTROY,
}						t_ftcode;

void					process_param(t_data *data, char **argv);
void					init_struct(t_data *data);
void					start_s(t_data *data);
void					*single_philo(void *index);

void					handle_mutex(t_mtx *mtx, t_ftcode ftcode);
void					handle_thread(pthread_t *thread_info,
							void *(*foo)(void *), void *t_data,
							t_ftcode ftcode);

void					setters_b(t_mtx *mutex, bool *dst, bool value);
bool					get_b(t_mtx *mutex, bool *value);
void					set_long(t_mtx *mutex, long *dst, long value);
long					get_long(t_mtx *mutex, long *value);

void					wait_all_threads(t_data *data);
void					count_active_threads(t_mtx *mutex, long *value);
void					*confirm_death(void *ph_data);
void					print_status(t_ph_status status, t_ph *philo);

void					error_msg(const char *error_msg);
void					*ft_malloc(size_t bytes);
long					gettime(t_time_unit time_unit);
void					ft_usleep(long sleep_time, t_data *data);
void					free_me(t_data *data);

#endif
