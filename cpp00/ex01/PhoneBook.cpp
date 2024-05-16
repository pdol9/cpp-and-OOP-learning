/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:29:58 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 14:21:07 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	// std::cout << " PhoneBook Constructor called" << std::endl;
	_counter = 0;
	_maxDisplay = 0;
}

PhoneBook::~PhoneBook( void ) {

	// std::cout << " PhoneBook Deconstructor called" << std::endl;
}

/* setting up a new contact entry inside a phone book (array) */
void	PhoneBook::addContact(void) {

	_contactsList[_counter].set_index(_counter);
	_contactsList[_counter].set_firstName();
	_contactsList[_counter].set_lastName();
	_contactsList[_counter].set_nickName();
	_contactsList[_counter].set_phoneNumber();
	_contactsList[_counter].set_darkestSecret();
	_counter++;
	if (_counter > 7)
		_counter = 0;
	if (_maxDisplay < 8)
		_maxDisplay++;
}

/* display list of contacts */
void	PhoneBook::searchContact( void ) {

	std::cout << "=============================================" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "=============================================" << std::endl;
	for (int i = 0; i < _maxDisplay; ++i)
		_contactsList[i].displayInfo(i);

	int	num = 0;
	std::cout << "enter index (0 -> 7):" << std::endl;
	std::cin >> num;
	while (num < 0 || num > 7 || std::cin.fail()) {
		if (std::cin.eof())
			return;
		std::cerr << "Invalid index value. Let's try again." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		std::cin >> num;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<int>::max(), '\n');
	_contactsList[num].displayContact();
}
