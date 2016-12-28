# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/28 16:42:36 by acazuc            #+#    #+#              #
#    Updated: 2016/12/28 17:36:48 by acazuc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS_NAME = ft_putchar.c \
	   ft_putstr.c \
	   ft_strcmp.c \
	   ft_strlen.c \
	   ft_swap.c \

SRCS_PATH = srcs/

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))

OBJS = $(SRCS:.c=.o)

INCLUDES = includes/

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $@ $<
	ranlib $@

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean
