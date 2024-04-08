# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 16:11:15 by jdoukhan          #+#    #+#              #
#    Updated: 2024/04/08 15:46:23 by jdoukhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME = cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
CC = c++
URL = https://cdn.intra.42.fr/pdf/pdf/89235/en.subject.pdf

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SOURCES = \
		main.cpp\

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
	@rm -rf $(OBJS) objs/main_42.o
	@echo "\033[0;33mCleaned .o files ✔️\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;91mCleaned exe ✔️\033[0m"

re: fclean all

bonus: objs/main_42.o
	@$(CC) srcs/main_42.cpp $(CFLAGS) -o $(NAME) $(INCLUDES)
	@echo "\033[0;32mBonus part compiled ✔️\033[0m"

subject.txt: 
	@curl $(URL) | pdftotext - subject.txt -layout -nopgbrk

read: subject.txt
	@bat subject.txt

.PHONY: all clean fclean re bonus pdf read
