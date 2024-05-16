/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:36:14 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:38:15 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	Span sp = Span(5);
	srand(time(NULL));
	{
		try {
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		// adding more numbers than vector's size
		try {
			for (int i = 0; i < 8; ++i) {
				sp.addNumber(i * 3 + 11);
			}
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		// finding span with invalid array size
		Span span1 = Span(1);
		try {
			std::cout << span1.shortestSpan() << std::endl;
			std::cout << span1.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		Span bigSet = Span(10000);
		std::vector<int> numbers (10000);
		std::cout << "Generating random numbers ... " << std::endl;
//		int* ptr = numbers.data();
//		for (unsigned int i = 1; i < numbers.size(); i++) {
//			*ptr++ = (rand() / 1024) % i;
//		}
		generate(numbers.begin(), numbers.end(), rand);
		try {
			bigSet.addVector(numbers);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << bigSet.shortestSpan() << std::endl;
			std::cout << bigSet.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}

