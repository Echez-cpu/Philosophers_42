# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 22:30:28 by pokpalae          #+#    #+#              #
#    Updated: 2024/09/30 12:52:09 by pokpalae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	philo

CC					=	gcc
CFLAGS				=	-Wall -Werror -Wextra -g -fsanitize=thread
RM					=	rm -f

INC					=	includes/
SRC_DIR				=	s_code/
OBJ_DIR				=	obj/

SRC					=	init.c \
						threads_mutex.c \
						busy_wait.c \
						parameters.c \
						main.c \
						print.c \
						get_setters.c \
						sim.c \
						utils.c

SRCS				=	$(addprefix $(SRC_DIR), $(SRC))

OBJ 				= 	$(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))



all: 					$(NAME)

$(NAME): 				$(OBJ)
						@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


$(OBJ_DIR)%.o:			$(SRC_DIR)%.c 
						@mkdir -p $(@D)
						@$(CC) $(CFLAGS) -c $< -o $@

clean:
						@$(RM) -r $(OBJ_DIR)

fclean: 				clean
						@$(RM) $(NAME)
						@$(RM) s_code/a.out

re: 					fclean all


.PHONY: 				all clean fclean re leaks valgrind_leaks tsan_leaks help

leaks: re
	@echo "\033[1;33m\nChecking for memory leaks...\033[0m"
	leaks --atExit -- ./$(NAME) 5 800 200 200 3

valgrind_leaks: re
	@echo "\033[1;33m\nChecking for memory leaks with valgrind...\033[0m"
	valgrind --tool=helgrind ./$(NAME) 5 800 200 200 2

tsan_leaks: re
	@echo "\033[1;33m\nChecking for data races with ThreadSanitizer...\033[0m"
	./$(NAME) 5 800 200 200 3

help:
	@echo "\033[1;35mMake options:\033[0m"
	@echo "\033[1;36mmake all\033[0m   Compile the program"
	@echo "\033[1;36mmake clean\033[0m   Remove object files"
	@echo "\033[1;36mmake fclean\033[0m   Remove object files and the executable"
	@echo "\033[1;36mmake re\033[0m   Re-build program from fresh after fclean"
	@echo "\033[1;36mmake leaks\033[0m   Check for memory leaks in macOS"
	@echo "\033[1;36mmake valgrind_leaks\033[0m   Check for leaks with valgrind in linux"
	@echo "\033[1;36mmake tsan_leaks\033[0m   Check for data races with ThreadSanitizer"
	@echo "\033[1;36mmake tsan_leaks\033[0m  Don't run -fsanitize=thread with valgrind"
