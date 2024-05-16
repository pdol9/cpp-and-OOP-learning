/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:12:24 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 14:14:11 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Database.hpp"

float	returnFloat(const std::string& str, bool valueCheck) {
	// std::cout << " what is str??: "<< str << std::endl;
	// std::string errorMsg = "bad input => " + str;
	char *pEnd;
	float value = std::strtof(str.c_str(), &pEnd);
	if (str == ""){
		std::cout << " input:: "<< str << std::endl;
		throw std::runtime_error(Database::errorMsg.c_str() + str);
	}
	if (*(pEnd) != '\0' || pEnd == str.c_str()) {
		std::cout << " input:: "<< str << std::endl;
		throw std::runtime_error(Database::errorMsg.c_str() + str);
	}
	if (valueCheck == true)
	{
		long val = std::strtol(str.c_str(), &pEnd, 10);
		if (val < 0)
			throw (Database::negativeNumException());
		else if (val > 1000)
			throw (Database::tooLargeNumException());
	}
	return value;
}

void	isValidDate(const std::string& str) {
	std::stringstream ss(str);
	int year, month, day;
	char separator;

	// Parse the year, month, and day from the string
	ss >> year >> separator >> month >> separator >> day;
	// std::cout << year <<  separator <<  month<<  separator <<  day<<std::endl;
	// Check if the parsing was successful
	if (ss.fail() || ss.peek() != EOF) {
		std::cout << " input:EOF: "<< str << std::endl;
		throw std::runtime_error(Database::errorMsg.c_str() + str);
	}

	if (year < 0 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31) {
		// std::cout << " input:YEAR: "<< str << std::endl;
		throw std::runtime_error(Database::errorMsg.c_str() + str);
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
		throw std::runtime_error(Database::errorMsg.c_str() + str);
	}

	if (month == 2) {
		bool leapYear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
		if (leapYear && day > 29) {
			throw std::runtime_error(Database::errorMsg.c_str() + str);
		} else if (!leapYear && day > 28) {
			throw std::runtime_error(Database::errorMsg.c_str() + str);
		}
	}
}

/*

The reason this code is causing a segfault is because you're trying to throw 
a pointer to a temporary object. In the following line of code:

throw (Database::errorMsg.c_str() + str);

errorMsg.c_str() returns a pointer to the underlying character array of 
the errorMsg string. You then attempt to concatenate this pointer with 
the str variable using the + operator. This operation creates a temporary 
std::string object that contains the concatenated result.

However, the c_str() method of the std::string object returns a pointer 
to the underlying character array of the string. This pointer is only valid 
for the lifetime of the string object. Once the string object is destroyed, 
the pointer becomes invalid and any attempt to use it results in undefined 
behavior, which in your case, causes a segfault.

To fix this issue, you should not concatenate the pointers, but instead 
create a new std::string object that contains the concatenated result. 
You can then throw this new std::string object, like this:

throw std::runtime_error(Database::errorMsg + str);

This creates a new std::string object that contains the concatenated result 
of Database::errorMsg and str, and throws this new string object as a 
std::runtime_error exception.

By creating a new std::string object, you ensure that the pointer returned 
by the c_str() method is valid for the lifetime of the string object, and 
you avoid the segfault that was caused by the original code.





*/