/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:45:43 by pdolinar          #+#    #+#             */
/*   Updated: 2023/02/08 03:12:44 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <cstdlib>

class ScalarConverter {

private:
	static std::string	_input;
	static char 		_charValue;
	static int 			_intValue;
	static float		_floatValue;
	static double		_doubleValue;
	static long			_valueHolder;
	static bool			_validInput;

	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& other );
	ScalarConverter& operator=(const ScalarConverter& other );

public:

	static void	convert(std::string& arg);
	static void	convertFromChar();
	static void	convertFromInt();
	static void	convertFromFloat();
	static void	convertFromDouble();

	static void	printChar();
	static void	printInt();
	static void	printFloat();
	static void	printDouble();

	static void	PrintConvertedValues();
	static bool	nanCheck(std::string addFloat);

};

#endif
