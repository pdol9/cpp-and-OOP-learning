/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:45:30 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:45:31 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern: Default Constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern: Deconstructor called" << std::endl;
}

Intern::Intern( const Intern& other )
{
	std::cout << "Intern: Copy constructor called" << std::endl;
	*this = other;
}

Intern& Intern::operator=( const Intern& other )
{
	std::cout << "Intern: Assignement operator called" << std::endl;
	(void)other;
	return *this;
}

Form* Intern::makeForm( const std::string& formName, const std::string& target )
{
	const std::string	formRequests = "robotomy,presidentialpardon,shrubbery";
	unsigned int pos = formRequests.find(formName);
	Form* tmp = NULL;

	switch (pos) {
		case 0:
			tmp = new RobotomyRequestForm(target);
			break ;
		case 9:
			tmp = new PresidentialPardonForm(target);
			break ;
		case 28:
			tmp = new ShrubberyCreationForm(target);
			break ;
		default:
			throw (Form::InvalidRequest());
	}

	std::cout << "Intern creates " << tmp->getFormName() << std::endl;
	return tmp;
}
