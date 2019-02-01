# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/31 21:57:54 by lhernand          #+#    #+#              #
#    Updated: 2019/01/31 21:58:45 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ArrayTemplate
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pendatic-errors
CXXFILES = Array.cpp \
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
