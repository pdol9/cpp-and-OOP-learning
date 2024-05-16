/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:11:05 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 15:14:11 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// handle error:
	// duplicates
	// negative num
	// non-numeric values

void	PmergeMe::merge()
{

}

void	PmergeMe::mergeSort()
{

}

int main(int argc, char **argv)
{
	PmergeMe storedValues(argv, argc);


	// print given input
	std::cout << "After: <given input>" << std::endl;
	std::cout << "Time to process a range of " << storedValues.getSize() << " with std::vector : time us" << std::endl;
	std::cout << "Time to process a range of " << storedValues.getSize() << " with std::set : time us" << std::endl;

	return 0;
}
