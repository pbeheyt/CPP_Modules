# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 13:58:32 by pbeheyt           #+#    #+#              #
#    Updated: 2023/04/08 14:08:27 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC 		= c++

CFLAGS 	= -Wall -Wextra -Werror -std=c++98

SRCS	= megaphone.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re