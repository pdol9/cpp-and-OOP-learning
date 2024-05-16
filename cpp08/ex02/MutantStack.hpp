/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:39:07 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:39:09 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
#define MUTANT_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() : std::stack<T>() {};
	~MutantStack() {};
	MutantStack(const MutantStack& other) : std::stack<T>(other) {};
	MutantStack& operator=(const MutantStack& other)
	{
		std::stack<T>::operator = (other);
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

};

#endif

