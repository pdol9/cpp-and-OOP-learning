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

#include "QuantDatabase.hpp"

QuantDatabase::QuantDatabase() : Database()
{}

QuantDatabase::QuantDatabase(const char *inputFile) : Database(inputFile)
{}

QuantDatabase::~QuantDatabase()
{}

QuantDatabase::QuantDatabase(const QuantDatabase& other) : Database()
{
	*this = other;
}

QuantDatabase& QuantDatabase::operator=(const QuantDatabase& other)
{
	if (this != &other) {
		_DataBase.close();
		_DataBase.open(other._inputFileName);
		_DataBase.clear();
		_line = other.getLine();
		_FileContent = other.getFileContent();
	}
	return *this;
}
