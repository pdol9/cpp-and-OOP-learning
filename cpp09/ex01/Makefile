# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:30:52 by pdolinar          #+#    #+#              #
#    Updated: 2023/03/14 14:57:40 by pdolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98 -g -Wfatal-errors
RM := rm -rf
IGN:=||:
NAME := RPN
SRC := main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "Compiled!"

t1:
	@./$(NAME) "1 3 -" # = -2
	@./$(NAME) "7 7 / 4 5 - +" # = 0

test: re
	@./$(NAME) "1 3 -" # = -2
	@./$(NAME) "7 7 * 7 -" # = 42
	@./$(NAME) "7 7 / 4 5 - +" # = 0
	@./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +" # 42
	@./$(NAME) "7 7 2 8 2 1 * 7 - 8 + * + 5 - + +" # = 35
	@./$(NAME) "7 7 2 2 2 2 1 * 7 - + - - + +" # = 11
	@echo "starting with edge cases:"
	@./$(NAME) ""$(IGN) # invalid
	@./$(NAME) " "$(IGN) # invalid
	@./$(NAME) "1"$(IGN) # invalid
	@./$(NAME) "1 1"$(IGN) # invalid
	@./$(NAME) "1 2 4 -"$(IGN) # invalid
	@./$(NAME) "1 -"$(IGN) # invalid
	@./$(NAME) "1 + -"$(IGN) # invalid
	@./$(NAME) "7 7 + 4 5 -"$(IGN) # invalid
# 	@./$(NAME) "7 7 + 4 5 - &"$(IGN) # invalid
# 	@./$(NAME) "7 7 + 4 5( - -"$(IGN) # invalid
# 	@./$(NAME) "(1 + 1)"$(IGN) # invalid
# 	@./$(NAME) "7 7 + + ( 1 + 1) 4 5 +"$(IGN) # invalid
# 	@./$(NAME) "7 (7 * 7) -"$(IGN) # = invalid
# 	@./$(NAME) "1 (1 + 1)"$(IGN) # invalid

%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean re

#https://wisdomsky.github.io/reverse-polish-notation-js-parser/
#https://www.dcode.fr/reverse-polish-notation
