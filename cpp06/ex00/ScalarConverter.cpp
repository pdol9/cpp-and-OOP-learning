/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:45:40 by pdolinar          #+#    #+#             */
/*   Updated: 2023/02/12 05:14:45 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char 		ScalarConverter::_charValue = '0';
int 		ScalarConverter::_intValue = 0;
float		ScalarConverter::_floatValue = 0;
double		ScalarConverter::_doubleValue = 0;

std::string	ScalarConverter::_input = "";
long		ScalarConverter::_valueHolder = 0;
bool		ScalarConverter::_validInput = false;

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

/* copy constructor */
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

/* assignment operator */
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	_charValue = other._charValue;
	_intValue = other._intValue;
	_floatValue = other._floatValue;
	_doubleValue = other._doubleValue;
	_validInput = other._validInput;
	_input = other._input;
	return (*this);
}
