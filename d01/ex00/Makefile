# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 23:56:33 by lhernand          #+#    #+#              #
#    Updated: 2019/01/22 23:59:18 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Pony
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -pedantic-errors -std=c++98
CXXFILES = Pony.cpp \
		main.cpp 

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(CXXFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
