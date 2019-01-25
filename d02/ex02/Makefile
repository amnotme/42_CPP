# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/24 19:10:07 by lhernand          #+#    #+#              #
#    Updated: 2019/01/24 19:10:24 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
CC = clang++
CCFILES = Fixed.cpp \
  		main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) -o $(NAME) $(CCFILES)

clean:
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
