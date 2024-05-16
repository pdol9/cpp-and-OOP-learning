/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:30:10 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:09:28 by pdolinar         ###   ########.fr       */
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
	out << obj.toFloat();
	return out;
}


/* 3rd: ex03 */

/* member functions to overload the comparison operators < > != = */

bool	Fixed::operator<( const Fixed& rhs ) const
{
	if (this->_fixedPointNumber < rhs._fixedPointNumber)
		return true;
	else
		return false;
}

bool	Fixed::operator>( const Fixed& rhs ) const
{
	if (this->_fixedPointNumber > rhs._fixedPointNumber)
		return true;
	else
		return false;
}

bool	Fixed::operator<=( const Fixed& rhs ) const
{
	if (this->_fixedPointNumber <= rhs._fixedPointNumber)
		return true;
	else
		return false;
}

bool	Fixed::operator>=( const Fixed& rhs ) const
{
	if (this->_fixedPointNumber >= rhs._fixedPointNumber)
		return true;
	else
		return false;
}

bool	Fixed::operator==( const Fixed& rhs ) const
{
	if (this->_fixedPointNumber == rhs._fixedPointNumber)
		return true;
	else
		return false;
}

bool	Fixed::operator!=( const Fixed& rhs ) const
{
	if (this->_fixedPointNumber != rhs._fixedPointNumber)
		return true;
	else
		return false;
}

// https://www.learncpp.com/cpp-tutorial/overloading-operators-using-member-functions/



/* member functions to overload the arithmetic operators / * + - */

Fixed	Fixed::operator+( const Fixed& rhs ) const
{
	return Fixed(_fixedPointNumber + rhs._fixedPointNumber);
}

// https://www.learncpp.com/cpp-tutorial/overloading-operators-using-member-functions/

Fixed	Fixed::operator-( const Fixed& rhs ) const
{
	return Fixed(_fixedPointNumber - rhs._fixedPointNumber);
}

Fixed	Fixed::operator*( const Fixed& rhs ) const
{
	return Fixed(_fixedPointNumber * rhs._fixedPointNumber);
}

Fixed	Fixed::operator/( const Fixed& rhs ) const
{
	return Fixed(_fixedPointNumber / rhs._fixedPointNumber);
}


/* member functions to overload the increment.. operators ++ -- */

Fixed	Fixed::operator++( int )
{
	Fixed tmp(*this);
	++_fixedPointNumber;
	return tmp;
}

// prefix increment operator overloading
Fixed&	Fixed::operator++( void )
{
	++_fixedPointNumber;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp(*this);
	--_fixedPointNumber;
	return tmp;
}

// prefix increment operator overloading
Fixed&	Fixed::operator--( void )
{
	--_fixedPointNumber;
	return *this;
}

/* member functions to overload the min,max operators / * + - */

static int& operator::min( int& value1, int& value2 );
static int& operator::min( const int& value1, const int& value2 );
static int& operator::max( int& value1, int& value2 );
static int& operator::max( const int& value1, const int& value2 );

z