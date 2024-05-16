/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:43:33 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:40 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* tests */
void	init_bureaucrat(int bureaGrade)
{
	try {
		Bureaucrat b("FakeBureaucrat", bureaGrade);
		std::cout << b << " :test passed successfully!" << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
}

void	incrementGradeTest(int bureaGrade, int increment)
{
	Bureaucrat a("Deskman", bureaGrade);
	try {
		a.incrementGrade(increment);
		std::cout << a << " graded successfully!" << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
}

void	decrementGradeTest(int bureaGrade, int decrement)
{
	Bureaucrat a("Deskman", bureaGrade);
	try {
		a.decrementGrade(decrement);
		std::cout << a << " graded successfully!" << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	LOG("instanctiating tests: ");
	init_bureaucrat(224);
	init_bureaucrat(0);
	init_bureaucrat(-42);
	init_bureaucrat(42);
	init_bureaucrat(144);

	LOG("increment grade tests: ");
	incrementGradeTest(64, 9);
	incrementGradeTest(4, 9);
	incrementGradeTest(4, 4);

	LOG("decrement grade tests: ");
	decrementGradeTest(14, 45);
	decrementGradeTest(122, 34);
	decrementGradeTest(29, 777);

	return 0;
}
