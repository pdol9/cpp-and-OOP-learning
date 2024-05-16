/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:54:38 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 15:05:58 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_HPP
#define __RPN_HPP

#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <list>
#include <stack>
#include <exception>

class RPN
{
	private:
		std::stack<int> _myStack;
		int _number;
		std::string _input;

	public:
		RPN();
		~RPN();
		RPN(int& argc, std::string str);
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);

		void	calcRPN();
};

#endif
