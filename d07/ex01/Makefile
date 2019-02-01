# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/31 02:49:30 by lhernand          #+#    #+#              #
#    Updated: 2019/01/31 02:50:00 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pendatic-errors
CXXFILES = iter.cpp \
		   main.cpp

CXXOBJECTS = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME):
		@$(CXX) $(CXXLAGS) $(CXXFILES) -o $(NAME) 

clean:
		@/bin/rm -f $(CXXOBJECTS)

fclean:
		@/bin/rm -f $(CXXOBJECTS) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
