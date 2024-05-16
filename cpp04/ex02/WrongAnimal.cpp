/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:22:01 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:28:26 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal: Deconstuctor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
	std::cout << "WrongAnimal: assignment operator called" << std::endl;
	_type = other._type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong animal sound ... " << std::endl;
	return;
}

std::string	WrongAnimal::getType( void ) const
{
	return ( _type );
}
