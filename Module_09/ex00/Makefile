# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 13:58:32 by pbeheyt           #+#    #+#              #
#    Updated: 2023/08/28 20:53:00 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= btc

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 #-g

SRCS		= main.cpp \
			BitcoinExchange.cpp

OBJS		= $(SRCS:%.cpp=obj/%.o)

all: $(NAME)

$(NAME): obj $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

obj/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

obj:
	mkdir -p obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re