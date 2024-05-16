/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:30:10 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 14:18:32 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main( void ) {

	PhoneBook	yellowPages;
	std::string	userInput = "INIT";

	std::cout << "*******************************\n" 
	<< ">>  indispensable PhoneBooK  <<\n*******************************" 
	<< std::endl;
	std::cout << "To use this phonebook, use either ADD / SEARCH / EXIT " << std::endl;
	do {
		if (userInput.compare("ADD") == 0)
			yellowPages.addContact();
		else if (userInput.compare("SEARCH") == 0)
			yellowPages.searchContact();
		else if (userInput.compare("EXIT") == 0)
			break;
		std::cout << " >> Waiting for a valid command ..." << std::endl;
	}
	while (std::getline (std::cin, userInput));
	return 0;
}
