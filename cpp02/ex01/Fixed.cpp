/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:30:10 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/20 19:53:48 by pdolinar         ###   ########.fr       */
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
	return _fixedPointNumber;
}

void	Fixed::setRawBits( int const raw )
{
	_fixedPointNumber = raw;
}

/* 2nd: ex01 */

/* ************************************************************************** */
// 							Int Constructor 
/* ************************************************************************** */
Fixed::Fixed( const int num ) : _fixedPointNumber(num << _precision)
{
	std::cout << "Int constructor called" << std::endl;
}

/* ************************************************************************** */
// 						Float Constructor 
/* ************************************************************************** */

Fixed::Fixed( const float num ) : _fixedPointNumber(roundf(num * (double)(1 << _precision)))
{
	std::cout << "Float constructor called" << std::endl;
}

/*  converts the fixed-point value to a floating-point value */
float	Fixed::toFloat( void ) const
{
	return ((double)_fixedPointNumber / (double)(1 << _precision));
}

/* converts the fixed-point value to an integer value */
int		Fixed::toInt( void ) const
{
	return (_fixedPointNumber >> _precision);
}

/* An overload of the insertion («) operator that inserts a floating-point
 * representation of the fixed-point number into the output stream object 
 * passed as parameter. 
 * */
std::ostream&	operator<<( std::ostream& out, const Fixed& obj )
{
    return (out << obj.toFloat());
}

// https://medium.com/incredible-coder/converting-fixed-point-to-floating-point-format-and-vice-versa-6cbc0e32544e
