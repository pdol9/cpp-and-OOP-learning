/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:43:53 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 00:46:48 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat a("LowLevelDeskPerson", 142);
	Bureaucrat b("HighRankDeskPerson", 42);
	Bureaucrat c("BirdPerson", 66);
	Bureaucrat* MyArray[] = {&a,&b,&c};

	for (int i = 0; i < 3; ++i)	{
		LOG(*MyArray[i]);
		LOG(" : has started working.\n");
	}
	LOG("\n");

	Form A;
	Form B(A);
	Form C("FKK-2020", 55, 72);
	Form D("RV-20KK", 104, 68);
	Form* FormArray[] = {&A,&B,&C,&D};

	for (int i = 0; i < 4; ++i) {
		LOG(*FormArray[i]);
		LOG("\n");
	}

	/* various tests */
	LOG("\n << TESTING >>\n");
	try {
		Form E("ERROr-2", -1, 666);
		a.signForm(E);
		std::cout << E << std::endl;
	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		a.signForm(C);
		std::cout << C << std::endl;
	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		b.signForm(A);
		std::cout << A << std::endl;
	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		c.signForm(C);
		std::cout << C << std::endl;
	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		c.signForm(D);
		std::cout << D << std::endl;
	} catch (std::exception const & e) {
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
