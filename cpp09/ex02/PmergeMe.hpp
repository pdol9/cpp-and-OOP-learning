/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:09:45 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 15:13:47 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <string>

class PmergeMe
{
	private:
		std::vector<int>storedVectorValues;
		std::vector<int>sortedVectorValues;
		std::set<int>storedSetValues;
		std::set<int>sortedSetValues;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(char **input, int size);
		void	merge();
		void	mergeSort();

		int getSize() const;
};

#endif
