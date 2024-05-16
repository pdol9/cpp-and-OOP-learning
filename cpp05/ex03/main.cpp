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
#include "Intern.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat a("Handless Larry", 4);
	Bureaucrat b("OneEye Tom", 44);
	Bureaucrat c("SixFinger Mary", 144);

	Intern* student = NULL;
	LOG(">> sign Shrubbery Creation Form\n");
	LOG(" *** replace / use interns to create forms: \n");
	Form* S1 = student->makeForm("shrubbery", "Mordor");
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
	LOG(" *** replace / use interns to create forms: \n");
	Form* S2 = student->makeForm("presidentialpardon", "JackRipper");
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
	LOG(" *** replace / use interns to create forms: \n");
	Form* S3 = student->makeForm("robotomy", "Bender");
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

	LOG("test with invalid request\n");
	try {
		Form* S4 = student->makeForm("Bureaucrat_replacement_with_AI", "Bender");
		a.executeForm(*S4);
		delete S4;
	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}



	return 0;
}
