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

#include "PriceDatabase.hpp"

PriceDatabase::PriceDatabase() : Database()
{}

PriceDatabase::PriceDatabase(const char *inputFile) : Database(inputFile)
{}

PriceDatabase::~PriceDatabase()
{}

PriceDatabase::PriceDatabase(const PriceDatabase& other) : Database()
{
	*this = other;
}

PriceDatabase& PriceDatabase::operator=(const PriceDatabase& other)
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
