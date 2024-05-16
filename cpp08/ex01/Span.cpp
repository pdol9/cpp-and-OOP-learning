/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:36:16 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:36:17 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{}

Span::~Span()
{}

Span::Span(const Span& other)
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	_N = other._N;
	_arr.resize(other._arr.size());
	for (unsigned int i = 0; i < _arr.size(); ++i)
	{
		_arr[i] = other._arr[i];
	}
	return *this;
}

Span::Span(unsigned int num) : _N(num)
{}

void	Span::addNumber(int addNum)
{
	if (_arr.size() == _N)
		throw (Span::OutOfRangeException());
	_arr.push_back(addNum);
}

int	Span::shortestSpan()
{
	if (_arr.size() < 2)
		throw (Span::VectorTooSmallException());
	std::vector<int> sortedNumbers = _arr;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minDiff = INT_MAX;

	std::vector<int>::iterator it1, it2;
	for (it1 = sortedNumbers.begin(); it1 != sortedNumbers.end(); ++it1) {
        for (it2 = it1 + 1; it2 != sortedNumbers.end(); ++it2) {
			int current_distance = std::abs(*it1 - *it2);
            if (current_distance < minDiff) {
                minDiff = current_distance;
            }
        }
    }
	return minDiff;
}

int	Span::longestSpan()
{
	if (_arr.size() < 2)
		throw (Span::VectorTooSmallException());

	std::vector<int> sortedNumbers = _arr;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	return *(--sortedNumbers.end()) - *sortedNumbers.begin();
}

void Span::addVector(std::vector<int> &addNums)
{
	_arr.insert(_arr.end(), addNums.begin(), addNums.end());
}

const char* Span::OutOfRangeException::what() const throw ()
{
	return "OutOfRangeIndex";
}

const char* Span::VectorTooSmallException::what() const throw ()
{
	return "VectorTooSmallException";
}

