/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:36:17 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:36:18 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <climits>
#include <algorithm>
#include <vector>
#include <iostream>

class Span {
private:
	unsigned int _N;
	std::vector<int> _arr;

public:

	Span();
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& other);

	Span(unsigned int num);

	void	addNumber(int addNum);
	int	shortestSpan();
	int	longestSpan();

	void	addVector(std::vector<int> &addNums);

	class OutOfRangeException : public std::exception {
	public:
		virtual const char *what() const throw ();
	};
 	class VectorTooSmallException : public std::exception {
	public:
		virtual const char *what() const throw ();
	};

};

#endif
