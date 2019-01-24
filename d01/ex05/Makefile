# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 22:52:40 by lhernand          #+#    #+#              #
#    Updated: 2019/01/23 22:52:41 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = clang++
CCFILES = Brain.cpp \
  		Human.cpp \
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
