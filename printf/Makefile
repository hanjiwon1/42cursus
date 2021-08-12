# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/04 17:55:55 by sbaek             #+#    #+#              #
#    Updated: 2021/07/30 22:16:59 by sbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGES		= -Wall -Werror -Wextra

NAME		= libftprintf.a
LIBFT		= libft
LIBFT_NAME	= libft.a

SRCS		= ft_printf.c ft_printf_utils.c
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
		gcc $(CFLAGES) -c $< -o $@ -I ./

$(NAME): $(OBJS)
		make all -C $(LIBFT)/
		cp $(LIBFT)/$(LIBFT_NAME) $(NAME)
		ar rc $@ $^
	
clean:
		rm -f $(OBJS)
		make clean -C $(LIBFT)

fclean: clean
		rm -f $(NAME)
		make fclean -C $(LIBFT)

re: fclean all
