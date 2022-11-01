# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 17:52:08 by kchaouki          #+#    #+#              #
#    Updated: 2022/10/21 17:52:09 by kchaouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c utils/ft_change_base.c utils/ft_print_decimal.c utils/ft_print_address.c \
	  utils/ft_putchar.c utils/ft_putstr.c utils/ft_print_uns_decimal.c utils/ft_strlen.c \
	  utils/ft_print_hex.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -I.

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re