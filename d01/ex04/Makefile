# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 22:42:44 by lhernand          #+#    #+#              #
#    Updated: 2019/01/23 22:42:47 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_brain
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -pedantic-errors
CC = clang++
CCFILES = ex04.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(CCFLAGS) -o $(NAME) $(CCFILES)

fclean:
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(NAME)

re: fclean make

.PHONY: re clean all fclean
