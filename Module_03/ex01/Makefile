# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 13:58:32 by pbeheyt           #+#    #+#              #
#    Updated: 2023/04/28 00:15:36 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ScavTrap

CC 		= c++

CFLAGS 	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJS	= $(SRCS:%.cpp=obj/%.o)

all: $(NAME)

$(NAME): obj $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

obj/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

obj:
	mkdir -p obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re