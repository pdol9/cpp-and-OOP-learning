/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:44:33 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:44:34 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat a("Handless Larry", 4);
	Bureaucrat b("OneEye Tom", 44);
	Bureaucrat c("SixFinger Mary", 144);

	LOG(">> sign Shrubbery Creation Form\n");
	Form* S1 = new ShrubberyCreationForm("Mordor");
	try {
		a.executeForm(*S1);

	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}
	LOG(" -- sign it first --\n");
	try {
		a.signForm(*S1);
		a.executeForm(*S1);

	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}
	delete S1;
	
	LOG(">> sign Presidential Pardon form\n");
	Form* S2 = new PresidentialPardonForm("JackRipper");
	try {
		b.executeForm(*S2);

	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}
	LOG(" -- hand it to another bureaucrat --\n");
	try {
		a.signForm(*S2);
		a.executeForm(*S2);

	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}
	delete S2;
	
	LOG(">> sign Robotomy Request Form\n");
	Form* S3 = new RobotomyRequestForm("Bender");
	try {
		c.executeForm(*S3);

	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}
	LOG(" -- sign it first --\n");
	try {
		c.signForm(*S3);
		c.executeForm(*S3);

	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}
	delete S3;


	return 0;
}
