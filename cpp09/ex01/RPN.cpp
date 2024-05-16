/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:54:35 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/27 11:16:08 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(int& argc, std::string str) : _input(str)
{
	if (argc != 2)
		throw std::runtime_error("invalid input");
	if (_input.find_first_not_of("1234567890 -+/*") != std::string::npos || _input.empty())
		throw std::runtime_error("invalid input");
}

RPN::~RPN() {}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		_myStack = other._myStack;
		_number = other._number;
		_input = other._input;
	}
	return *this;
}

void	RPN::calcRPN()
{
	std::string::size_type next_pos, pos = 0;
	while (pos < _input.size()) {
		// get token
		std::string token;
		next_pos = _input.find(' ', pos);
		if (next_pos == std::string::npos)
			token = _input.substr(pos);
		else
			token = _input.substr(pos, next_pos - pos);
		
		// while there;s digit -> put on the stack
		while (isdigit(token[0])) {
			_number = atoi(token.c_str());
			_myStack.push(_number);
			pos = next_pos + 1;
			next_pos = _input.find(' ', pos);
			token = _input.substr(pos, next_pos - pos);
			if (next_pos == std::string::npos)
				break;
		}
		if (_myStack.size() < 2)
			throw std::runtime_error("stack too small");

		int a = _myStack.top();
		_myStack.pop();
		int b = _myStack.top();
		_myStack.pop();
		switch (token[0]) {
			case '+': _myStack.push(b + a); break;
			case '-': _myStack.push(b - a); break;
			case '*': _myStack.push(b * a); break;
			case '/': _myStack.push(b / a); break;
		}

		pos = next_pos + 1;
		if (next_pos == std::string::npos && _myStack.size() > 1)
			throw std::runtime_error("no operands");
		if (next_pos == std::string::npos)
			break;
			// pos = _input.size();
	}
	std::cout << _myStack.top() << std::endl;
}
