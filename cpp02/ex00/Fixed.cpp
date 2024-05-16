/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:30:10 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/20 19:48:46 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
				/* 	Default Constructor and Destructor */
/* ************************************************************************** */

Fixed::Fixed( void ) : _fixedPointNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/* ************************************************************************** */
						/* 	Copy constructor  */
/* ************************************************************************** */

Fixed::Fixed( const Fixed& other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/* ************************************************************************** */
					/* 	 Copy assignment operator called */
/* ************************************************************************** */

Fixed& Fixed::operator=( const Fixed& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointNumber = other.getRawBits();
	return *this;
}

/* ************************************************************************** */
/* 				getter and setter functions */
/* ************************************************************************** */

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointNumber;
}

void	Fixed::setRawBits( int const raw )
{
	_fixedPointNumber = raw;
}
