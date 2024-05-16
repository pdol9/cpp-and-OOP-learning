# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:30:52 by pdolinar          #+#    #+#              #
#    Updated: 2022/12/16 21:19:10 by pdolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Werror -Wextra -Wshadow
F := -Wimplicit-fallthrough=0 -std=c++98
RM := rm -rf

NAME := harlFilter
SRC := main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(F) $^ -o $@
	@echo "Compiled!"

%.o:%.cpp
	@$(CC) $(CFLAGS) $(F) -c $< -o $@

clean:
	@$(RM) $(NAME) $(OBJ)

re: clean all

.PHONY: all clean re
