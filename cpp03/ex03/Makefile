# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:30:52 by pdolinar          #+#    #+#              #
#    Updated: 2022/12/23 20:15:08 by pdolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Werror -Wextra -Wshadow #-Wno-shadow
F := -std=c++98
RM := rm -rf

NAME := DiamondTrap
SRC := main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(F) $^ -o $@
	@echo "Compiled!"
	./$(NAME)

%.o:%.cpp
	@$(CC) $(CFLAGS) $(F) -c $< -o $@

clean:
	@$(RM) $(NAME) $(OBJ)

re: clean all

.PHONY: all clean re
