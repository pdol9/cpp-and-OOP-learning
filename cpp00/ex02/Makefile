# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 14:24:30 by pdolinar          #+#    #+#              #
#    Updated: 2023/01/14 14:27:11 by pdolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra
F = -std=c++98
RM = rm -rf

NAME = account
SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(F) $^ -o $@
	@echo "Compiled!"
# 	./$(NAME)

%.o:%.cpp
	@$(CC) $(CFLAGS) $(F) -c $< -o $@

clean:
	@$(RM) $(NAME) $(OBJ)

re: clean all

.PHONY: all clean re