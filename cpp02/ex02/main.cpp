/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:42:06 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 11:15:56 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	{
		Fixed		a;
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "Given tests:" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed		a(6.66f);
		Fixed		c;
		Fixed 		b( Fixed( 2.22f ) + Fixed( 3 ) );
	
		std::cout << "\n >> mathematical operation:" << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "--a: " << --a << std::endl;
		std::cout << "a--: " << a-- << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "b--: " << b-- << std::endl;
		
		c = a + b;
		std::cout << "c= sum(a,b) : " << c << std::endl;
		c = a - b;
		std::cout << "c= sub(a,b): " << c << std::endl;
		c = a * b;
		std::cout << "c= mul(a,b): " << c << std::endl;
		a = 30; b = 6;
		c = a / b;
		std::cout << "c= dev(a,b): " << c << std::endl;
		
		
	}
	{
		Fixed	a(2.222f);
		Fixed	b(3);
		Fixed	c(4.5f);

		std::cout << "\n >> boolean tests:" << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		bool var = (b == c);
		std::cout << "b == c: " << std::boolalpha << var << std::endl;
		var = (b != c);
		std::cout << "b != c: " << std::boolalpha << var << std::endl;
		
		var = (b < c);
		std::cout << "b < c: " << std::boolalpha << var << std::endl;
		var = (b > c);
		std::cout << "b > c: " << std::boolalpha << var << std::endl;
		var = (b <= c);
		std::cout << "b <= c: " << std::boolalpha << var << std::endl;
		var = (b >= c);
		std::cout << "b >= c: " << std::boolalpha << var << std::endl;
		
		std::cout << "max (a, b): " << Fixed::max( a, b ) << std::endl;
		std::cout << "min (a, c): " << Fixed::min( a, c ) << std::endl;
		std::cout << "min (b, c): " << Fixed::min( b, c ) << std::endl;
		std::cout << "max (b, c): " << Fixed::max( b, c ) << std::endl;
	
	}
	
	return 0;

}
