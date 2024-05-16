/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:08 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:09 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	_type = "WrongCat";
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat: Deconstuctor called" << std::endl;
	return;
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal()
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=( const WrongCat& other )
{
	std::cout << "WrongCat: assignment operator called" << std::endl;
	_type = other._type;
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong cat sound ...  " << std::endl;
	return;
}
