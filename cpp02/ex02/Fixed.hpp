/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:30:08 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 11:11:39 by pdolinar         ###   ########.fr       */
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

	static Fixed& min( Fixed& value1, Fixed& value2 );
	static const Fixed& min( const Fixed& value1, const Fixed& value2 );
	static Fixed& max( Fixed& value1, Fixed& value2 );
	static const Fixed& max( const Fixed& value1, const Fixed& value2 );

};

std::ostream& operator<<( std::ostream& out, const Fixed& obj );

#endif
