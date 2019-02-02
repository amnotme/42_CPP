# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/01 21:11:12 by lhernand          #+#    #+#              #
#    Updated: 2019/02/01 21:49:28 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pendatic-errors
CXXFILES = Span.cpp \
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
