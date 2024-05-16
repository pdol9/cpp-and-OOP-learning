/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:09:41 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 15:10:55 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(char **input, int size)
{
	std::vector<int>storedVectorValues;
	for (int i = 1; i < size; ++i) {
		storedVectorValues.push_back(atoi(input[i]));
	}

	std::set<int>storedSetValues;
	for (int i = 1; i < size; ++i) {
		storedSetValues.insert(atoi(input[i]));
	}
	std::cout << "Before: ";
	for (unsigned int i = 0; i < storedVectorValues.size(); ++i)
	{
		std::cout << storedVectorValues.at(i) << " ";
	}
	std::cout << "\n";
}

int PmergeMe::getSize() const
{
	return storedVectorValues.size();
}
