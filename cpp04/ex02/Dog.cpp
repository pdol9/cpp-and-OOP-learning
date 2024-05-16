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

Dog::Dog( void ) : AAnimal()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_type = "Dog";
	_ptr = new Brain();
}

Dog::~Dog( void )
{
	std::cout << "Dog: Deconstuctor called" << std::endl;
	delete _ptr;
}

Dog::Dog( const Dog& other ) : AAnimal()
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	_ptr = NULL;
	*this = other;
}

Dog& Dog::operator=( const Dog& other )
{
	std::cout << "Dog: assignment operator called" << std::endl;
	_type = other._type;
	if (_ptr != NULL)
		delete _ptr;
	_ptr = new Brain(*other._ptr);
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wuff ...  " << std::endl;
}
