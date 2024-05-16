/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:30:08 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/19 19:43:35 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:

	// store the fixed-point number value
	int	_fixedPointNumber;
	
	// store the number of fractional bits
	// Its value will always be the integer literal 8
	static const int _precision = 8;

public:

	Fixed();
	~Fixed();
	
	Fixed( const Fixed& other );
	Fixed& operator=( const Fixed& other );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

#endif
