# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 16:11:15 by jdoukhan          #+#    #+#              #
#    Updated: 2024/04/03 11:10:00 by jdoukhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME = cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
URL = https://cdn.intra.42.fr/pdf/pdf/89235/en.subject.pdf

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SOURCES = main.cpp Bureaucrat.cpp
INCLUDES = -I./includes


################################################################################
#                                 Makefile Body                                #
################################################################################

SRCS = $(addprefix srcs/, $(SOURCES))
OBJS = $(SRCS:srcs/%.cpp=objs/%.o)

################################################################################
#                               Makefile Rules                                 #
################################################################################

all: $(NAME)

objs/%.o : srcs/%.cpp
	@mkdir -p objs/
	@$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

$(NAME) : $(OBJS)
	@$(CC) $(SRCS) $(CFLAGS) -o $(NAME) $(INCLUDES)
	@echo "\033[0;32mMandatory part compiled ✔️\033[0m"

clean:
	@rm -rf $(OBJS) $(B_OBJS)
	@echo "\033[0;33mCleaned .o files ✔️\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;91mCleaned exe ✔️\033[0m"

re: fclean all


subject.txt: 
	@curl $(URL) | pdftotext - subject.txt -layout -nopgbrk

read: subject.txt
	@bat subject.txt

.PHONY: all clean fclean re bonus pdf read
