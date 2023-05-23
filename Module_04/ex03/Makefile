# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 13:58:32 by pbeheyt           #+#    #+#              #
#    Updated: 2023/05/23 02:46:14 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Interface

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g

SRCS		= main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp

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