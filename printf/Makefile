# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 17:53:03 by jiwhan            #+#    #+#              #
#    Updated: 2022/02/06 18:43:51 by jiwhan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
LIBFTNAME = libft.a
LIBFTDIR = ./libft

SRCS = ft_printf.c ft_prinft_utils.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I ./

$(NAME) : $(OBJS)
	make all -C (LIBFTDIR)/
	cp $(LIBFTDIR)/$(LIBFTFILE) $(NAME)
	ar rc $@ $^

clean :
	rm -f $(OBJS)
	make clean -C $(LIBFTDIR)/

fclean : clean
	rm -f $(NAME)
	make fclean -C $(LIBFTDIR)/

re : fclean all

.PHONY : all clean fclean re