# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 21:08:09 by lhernand          #+#    #+#              #
#    Updated: 2019/01/23 21:08:19 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Zombie
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
CC = clang++
CCFILES = main.cpp \
		Zombie.cpp \
		ZombieEvent.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CCFLAGS) -o $(NAME) $(CCFILES)

fclean:
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: re, clean, all, fclean
