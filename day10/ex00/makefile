# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msegal <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 14:13:32 by msegal            #+#    #+#              #
#    Updated: 2020/01/20 19:06:36 by msegal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_putchar.c\
	  src/ft_putstr.c\
	  src/ft_strcmp.c\
	  src/ft_strlen.c\
	  src/ft_swap.c

OBJ = ft_putchar.o\
	  ft_putstr.o\
	  ft_strcmp.o\
	  ft_strlen.o\
	  ft_swap.o

CFLAGSS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGSS) -c -I includes/ft.h $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
