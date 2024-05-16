/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:31:26 by pdolinar          #+#    #+#             */
/*   Updated: 2023/02/10 22:44:25 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <climits>
#include <iomanip>
#include <exception>

void	ScalarConverter::PrintConvertedValues()
{
	std::cout << "char: ";
	printChar();
	std::cout << "\nint: ";
	printInt();
	std::cout << "\nfloat: ";
	printFloat();
	std::cout << "\ndouble: ";
	printDouble();
	std::cout << std::endl;
}

/* main function to convert input */
void	ScalarConverter::convert(std::string& arg)
{
	_input = arg;
	convertFromChar();
	convertFromInt();
	convertFromFloat();
	convertFromDouble();
	PrintConvertedValues();
}

void	ScalarConverter::convertFromChar()
{
	if (_input.size() != 1)
		return;
	_charValue = static_cast<char>(_input[0]);
	_intValue = static_cast<int>(_charValue);
	_floatValue = static_cast<float>(_charValue);
	_doubleValue = static_cast<double>(_charValue);
	_valueHolder = static_cast<long>(_charValue);
	_validInput = true;
std::cout << "hello from char:" << "\n";
}

void	ScalarConverter::convertFromInt()
{
	char *pEnd;
	long tmp = std::strtol(_input.c_str(), &pEnd, 10);
	if (*pEnd != '\0')
		return;
	_intValue = static_cast<int>(tmp);
	_charValue = static_cast<char>(tmp);
	_floatValue = static_cast<float>(tmp);
	_doubleValue = static_cast<double>(tmp);
	_valueHolder = tmp;
	_validInput = true;
std::cout << "hello from intConv\n";
}

void	ScalarConverter::convertFromFloat()
{
	char *pEnd;
	float tmp = std::strtof(_input.c_str(), &pEnd);
	if (*pEnd != 'f' || *(pEnd + 1) != '\0' || pEnd == _input.c_str())
		return;
	_floatValue = static_cast<double>(tmp);
	_intValue = static_cast<int>(_floatValue);
	_charValue = static_cast<char>(_floatValue);
	_doubleValue = static_cast<double>(_floatValue);
	_valueHolder = static_cast<long>(_floatValue);
	_validInput = true;
std::cout << "hello from floatConv\n";
}

void	ScalarConverter::convertFromDouble()
{
	char *pEnd;
	double tmp = std::strtod(_input.c_str(), &pEnd);
	if (_input.find('.') == std::string::npos || *pEnd != '\0')
		return;
	_doubleValue = static_cast<double>(tmp);
	_intValue = static_cast<int>(_doubleValue);
	_charValue = static_cast<char>(_doubleValue);
	_floatValue = static_cast<float>(_doubleValue);
	_valueHolder = static_cast<long>(_doubleValue);
	_validInput = true;
std::cout << "hello from doubleConv\n";
}

/* printing char */
void	ScalarConverter::printChar()
{
	if (_validInput == false || _valueHolder < CHAR_MIN || _valueHolder > CHAR_MAX)
		std::cout << "impossible";
	else if (_valueHolder < 33 || _valueHolder > 126)
		std::cout << "Non displayable";
	else
		std::cout << _charValue;
}

/* printing int */
void	ScalarConverter::printInt()
{
	if (_validInput == false || _valueHolder < INT_MIN || _valueHolder > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << _intValue;
}

/* printing float */
void	ScalarConverter::printFloat()
{
	if (nanCheck("f") == true)
		return;
	else if (_validInput == false) {
		std::cout << "impossible";
		return;
	}
	else if (_floatValue == static_cast<int>(_floatValue)) {
		_floatValue = static_cast<float>(_valueHolder);
		std::cout << std::fixed << std::setprecision(1);
	}
	std::cout << _floatValue << "f";
}

/* printing double */
void	ScalarConverter::printDouble()
{
	if (nanCheck("") == true)
		return;
	else if (_validInput == false) {
		std::cout << "impossible";
		return;
	}
	else if (_doubleValue == static_cast<int>(_doubleValue)) {
		_doubleValue = static_cast<double>(_valueHolder);
	}
	std::cout << _doubleValue;
}

bool	ScalarConverter::nanCheck(std::string addFloat)
{
	if (_input == "nanf" || _input == "nan") {
		std::cout << "nan" << addFloat;
		return true;
	}
	else if (_input == "inff" || _input == "inf") {
		std::cout << "inf" << addFloat;
		return true;
	}
	else if (_input == "-inff" || _input == "-inf") {
		std::cout << "-inf" << addFloat;
		return true;
	}
	return false;
}
