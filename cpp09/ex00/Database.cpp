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
const std::string Database::errorMsg = "bad input => ";

Database::Database()
{}

Database::Database(const char *inputFile) : _inputFileName(inputFile), _DataBase(inputFile)
{
	if (!_DataBase.is_open())
		throw std::runtime_error("could not open file.");
}

Database::~Database()
{}

Database::Database(const Database& other)
{
	*this = other;
}

Database& Database::operator=(const Database& other)
{
	if (this != &other) {
		// Close the current file stream
		_DataBase.close();

		// Open a new file stream with the new file name
		_DataBase.open(other._inputFileName);

		// Clear any error flags that may have been set when opening the file
		_DataBase.clear();

		_line = other.getLine();
		_FileContent = other.getFileContent();
	}
	return *this;
}

const char *Database::tooLargeNumException::what() const throw ()
{
	return "number too large";
}

const char *Database::negativeNumException::what() const throw ()
{
	return "not a positive number";
}

std::string Database::getLine() const
{
	return _line;
}

std::deque<std::string>	Database::getFileContent() const
{
	return _FileContent;
}

void	Database::readDataBase()
{
	std::getline(_DataBase, _line);
	while (std::getline(_DataBase, _line))
	{
		_FileContent.push_back(_line);
	}
	
	// debug
	// std::cout << "print the map> \n";
	// for (std::deque<std::pair<std::string, float> >::const_iterator it = _Values.begin(); it != _Values.end(); it++)
	// 	std::cout << it->first << " => " << it->second << "; \n";

	// c++11
	// std::cout << "print the map> \n";
	// for (auto const& [date, value] : _Values)
	//     std::cout << date << " => " << value << "; \n";
}
