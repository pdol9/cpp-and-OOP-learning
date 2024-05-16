/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:22:23 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:28:21 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ) : _type("Wild AAnimal")
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
	return;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal: Deconstuctor called" << std::endl;
	return;
}

AAnimal::AAnimal( const AAnimal& other )
{
	std::cout << "AAnimal: Copy constructor called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=( const AAnimal& other )
{
	std::cout << "AAnimal: assignment operator called" << std::endl;
	_type = other._type;
	return *this;
}

// void	AAnimal::makeSound( void ) const
// {
// 	std::cout << "grauling sound ... " << std::endl;
// 	return;
// }

std::string	AAnimal::getType( void ) const
{
	return ( _type );
}

void	AAnimal::Print()
{
	std::cout << "  ******************************** " << std::endl;
	std::cout << "  --- "<< _type << "  --- " << std::endl;
	std::cout << "  --- "<< this << "  --- " << std::endl;
	std::cout << "  --- ";
	this->makeSound();
	std::cout << "  --- " << std::endl;
	std::cout << "  ******************************** " << std::endl;
}
