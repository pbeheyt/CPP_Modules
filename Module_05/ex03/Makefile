# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 13:58:32 by pbeheyt           #+#    #+#              #
#    Updated: 2023/06/24 10:14:38 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Intern

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 #-g

SRCS		= main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp

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