# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:30:52 by pdolinar          #+#    #+#              #
#    Updated: 2022/12/16 17:05:50 by pdolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Werror -Wextra
F := -std=c++98
#-std=gnu++11
RM := rm -rf

TEST_FILE:=test.txt
NAME := replace_file_cont
SRC := main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(F) $^ -o $@
	@echo "Compiled!"

%.o:%.cpp
	@$(CC) $(CFLAGS) $(F) -c $< -o $@

clean:
	@$(RM) $(NAME) $(OBJ) $(TEST_FILE).replace
	chmod 755 $(TEST_FILE)

test: re
	@./$(NAME) $(TEST_FILE) " " "___" || echo "ERROR"

re: clean all

.PHONY: all clean re test
