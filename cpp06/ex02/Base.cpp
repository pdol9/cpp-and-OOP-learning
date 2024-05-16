/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:09:38 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:09:39 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void)
{
	int randomNumber = rand() % 3;
	
	switch (randomNumber)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify(Base* p)
{
	A* aPtr = dynamic_cast<A *>(p);
	if (aPtr)
		std::cout << "A";
	B* bPtr = dynamic_cast<B *>(p);
	if (bPtr)
		std::cout << "B";
	C* cPtr = dynamic_cast<C *>(p);
	if (cPtr)
		std::cout << "C";
}

void identify(Base& p)
{
	try {
		A& aPtr = dynamic_cast<A &>(p);
		std::cout << "A";
		(void)aPtr;
	} catch (std::exception &e) {}
	try {
		B& bPtr = dynamic_cast<B &>(p);
		std::cout << "B";
		(void)bPtr;
	} catch (std::exception &e) {}
	try {
		C& cPtr = dynamic_cast<C &>(p);
		std::cout << "C";
		(void)cPtr;
	} catch (std::exception &e) {}
}
