# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/24 00:31:48 by lhernand          #+#    #+#              #
#    Updated: 2019/01/24 01:00:00 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
CC = clang++
CCFILES = Weapon.cpp \
	  		HumanA.cpp \
			HumanB.cpp \
	  		main.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CCFLAGS) -o $(NAME) $(CCFILES)

clean:
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
