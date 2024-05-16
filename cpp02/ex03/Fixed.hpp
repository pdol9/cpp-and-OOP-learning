/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:30:08 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/21 18:37:57 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	int	_fixedPointNumber;
	static const int _precision = 8;

public:

	Fixed();
	~Fixed();

	Fixed( const Fixed& other );
	Fixed&	operator=( const Fixed& other );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	Fixed( const int num );
	Fixed( const float num );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	// member functions to overload the arithmetic operators
	Fixed	operator+( const Fixed& rhs ) const;
	Fixed	operator-( const Fixed& rhs ) const;
	Fixed	operator*( const Fixed& rhs ) const;
	Fixed	operator/( const Fixed& rhs ) const;

	bool	operator<( const Fixed& rhs ) const;
	bool	operator>( const Fixed& rhs ) const;
	bool	operator<=( const Fixed& rhs ) const;
	bool	operator>=( const Fixed& rhs ) const;
	bool	operator==( const Fixed& rhs ) const;
	bool	operator!=( const Fixed& rhs ) const;

	Fixed&	operator++( void );
	Fixed&	operator--( void );
	Fixed	operator++( int );
	Fixed	operator--( int );

	static int& operator::min( int& value1, int& value2 );
	static int& operator::min( const int& value1, const int& value2 );
	static int& operator::max( int& value1, int& value2 );
	static int& operator::max( const int& value1, const int& value2 );

};

std::ostream& operator<<( std::ostream& out, const Fixed& obj );

#endif
