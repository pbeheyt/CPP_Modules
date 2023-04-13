# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 13:58:32 by pbeheyt           #+#    #+#              #
#    Updated: 2023/04/13 23:11:12 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harl

CC 		= c++

CFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g

SRCS	= main.cpp \
		Harl.cpp

OBJS	= $(addprefix obj/, $(SRCS:.cpp=.o))

all: obj $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

obj/%.o: %.cpp $(wildcard %.hpp)
	$(CC) $(CFLAGS) -c $< -o $@

obj:
	mkdir -p obj

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all obj clean fclean re
