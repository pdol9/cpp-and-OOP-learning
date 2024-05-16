/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:11 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:12 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {

	std::cout << "Dog: Default constructor called" << std::endl;
	_type = "Dog";
	return;
}

Dog::~Dog(void) {

	std::cout << "Dog: Deconstuctor called" << std::endl;
	return;
}

Dog::Dog(const Dog& other) : Animal() {

	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {

	std::cout << "Copy assignment operator called" << std::endl;
	_type = other._type;
	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "Wuff ...  " << std::endl;
	return;
}
