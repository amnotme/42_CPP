# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 11:38:16 by lhernand          #+#    #+#              #
#    Updated: 2019/01/22 02:50:21 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Agenda
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
CXXFILES = Phonebook.cpp \
		Contact.cpp \
		main.cpp

all:
	$(CXX) $(CXXFLAGS) $(CXXFILES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
