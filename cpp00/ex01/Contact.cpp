/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:30:14 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 14:19:29 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {

	// std::cout << "Constructor called" << std::endl;
	_index = -1;
	_saveInput = "NULL";
}

Contact::~Contact( void ) {

	// std::cout << "Deconstructor called" << std::endl;
}

void	Contact::set_index( int i ) {

	_index = i;
}

void	Contact::getUserInput( std::string s ) {

	std::cout << s << std::endl;
	std::getline (std::cin, _saveInput);
	if (std::cin.eof())
		return;
	while (_saveInput.find_first_not_of(" ") == std::string::npos) {
		std::cout << " * Try again. *" << std::endl;
		std::getline (std::cin, _saveInput);
	}
}

/* getter functions */
void	Contact::set_firstName( void ) {

	getUserInput("Enter first name");
	_firstName = _saveInput;
}

void	Contact::set_lastName( void ) {

	getUserInput("Enter last name");
	_lastName = _saveInput;
}

void	Contact::set_nickName( void ) {

	getUserInput("Enter nick name");
	_nickName = _saveInput;
}

void	Contact::set_phoneNumber( void ) {

	getUserInput("Enter phone number");
	_phoneNumber = _saveInput;
}

void	Contact::set_darkestSecret( void ) {

	getUserInput("Enter your darkest Secret");
	_darkestSecret = _saveInput;
}

// display each field of a contact in a new line
void	Contact::displayContact( void ) {

	if (_index == -1) {
		std::cerr << "No entry at this index." << std::endl;
		return;
	}
	std::cout << "Index value: " << _index << std::endl;
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nick name: " << _nickName << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}

// display phone book overview of all entries
void	Contact::displayInfo( int i ) {

	std::cout << "|" << std::right << std::setw(10);
	std::cout << i << '|';
	
	if (_firstName.length() > 10)
		std::cout << _firstName.substr(0,9) << "." << '|';
	else
		std::cout << std::right << std::setw(10) << _firstName << '|';
	
	if (_lastName.length() > 10)
		std::cout << _lastName.substr(0,9) << "." << '|';
	else
		std::cout << std::right << std::setw(10) << _lastName << '|';
	
	if (_nickName.length() > 10)
		std::cout << _nickName.substr(0,9) << "." << '|';
	else
		std::cout << std::right << std::setw(10) << _nickName << '|';
	std::cout << std::endl;
}
