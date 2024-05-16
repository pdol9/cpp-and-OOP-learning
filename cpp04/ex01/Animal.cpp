/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:22:23 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:28:21 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Wild Animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
	return;
}

Animal::~Animal( void )
{
	std::cout << "Animal: Deconstuctor called" << std::endl;
	return;
}

Animal::Animal( const Animal& other )
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=( const Animal& other )
{
	std::cout << "Animal: assignment operator called" << std::endl;
	_type = other._type;
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "grauling sound ... " << std::endl;
	return;
}

std::string	Animal::getType( void ) const
{
	return ( _type );
}

void	Animal::Print()
{
	std::cout << "  ******************************** " << std::endl;
	std::cout << "  --- "<< _type << "  --- " << std::endl;
	std::cout << "  --- "<< this << "  --- " << std::endl;
	std::cout << "  --- ";
	this->makeSound();
	std::cout << "  --- " << std::endl;
	std::cout << "  ******************************** " << std::endl;
}
