/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:39:04 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:40:39 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
#include <vector>

int main()
{
	// testing with int
	{
		std::cout << "testing with int - MutantStack" << std::endl;
		MutantStack<int> mstack;
	
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();
	
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
	
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	// testing with std::list
	{
		std::cout << "testing with int - std::list" << std::endl;
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << *(--mstack.end()) << std::endl;

		mstack.pop_back();
	
		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
	
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::deque<int> temp(mstack.begin(), mstack.end());
		std::stack<int> s(temp);
	}
	
	// testing with std::string
	{
		std::cout << "testing with std::string - std::deque" << std::endl;
		std::deque<std::string> mstack;

		mstack.push_back("how good are you at c++ ?");
		mstack.push_back("42");

		std::cout << *(--mstack.end()) << std::endl;

		mstack.pop_back();
	
		std::cout << mstack.size() << std::endl;

		mstack.push_back("some more strings");
		mstack.push_back("5");
		mstack.push_back("737");
		mstack.push_back("no more strings!");

		std::deque<std::string>::iterator it = mstack.begin();
		std::deque<std::string>::iterator ite = mstack.end();
	
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<std::string> s(mstack);
	}
	return 0;
}
