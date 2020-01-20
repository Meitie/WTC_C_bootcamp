# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msegal <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 14:13:32 by msegal            #+#    #+#              #
#    Updated: 2020/01/20 14:38:49 by msegal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC:
	./src/

OBJ = $(SRC:.c=.o)
CFLAGSS += -Wall -Wextra -Werror -I./include

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

all:     $(NAME)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	fclean all

.PHONY: all clean fclean re
