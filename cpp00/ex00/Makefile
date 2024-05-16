# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 11:01:48 by pdolinar          #+#    #+#              #
#    Updated: 2022/12/15 11:01:51 by pdolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Werror -Wextra
F := -std=c++98
RM := rm -rf

NAME := megaphone
SRC := megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(F) $^ -o $@

%.o:%.cpp
	@$(CC) $(CFLAGS) $(F) -c $< -o $@

clean:
	$(RM) $(NAME) $(OBJ)

re: clean all

.PHONY: all clean re
