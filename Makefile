# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 15:55:49 by ineimatu          #+#    #+#              #
#    Updated: 2024/04/15 11:41:31 by ineimatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INCLUDE = ft_push_swap.h Makefile

SRCS = main.c \
	   fill_stack.c \
	   ft_errors.c \
	   ft_sort_three.c \
	   big_sort.c \
	   ft_sort_utils.c \
	   ft_sort_utils_2.c \
	   push.c \
	   reverse.c \
	   rotate.c \
	   swap.c \
	   big_sort_a_to_b.c \
	   big_sort_movements.c \

OBJS := $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) :$(OBJS) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
