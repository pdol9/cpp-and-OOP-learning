/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:08 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:09 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {

	std::cout << "Cat: Default constructor called" << std::endl;
	_type = "Cat";
	return;
}

Cat::~Cat(void) {

	std::cout << "Cat: Deconstuctor called" << std::endl;
	return;
}

Cat::Cat(const Cat& other) : Animal() {

	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {

	std::cout << "Copy assignment operator called" << std::endl;
	_type = other._type;
	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "Miauu ...  " << std::endl;
	return;
}
