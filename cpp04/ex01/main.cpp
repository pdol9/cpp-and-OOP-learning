/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:17:50 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:30:59 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include <sstream>
#include "Dog.hpp"
#include "Cat.hpp"

void brain_test(void)
{
	std::cout << "\n----------  brain test  ------------\n"<<std::endl;

	// generating thoughts
	std::stringstream str;
	std::string array_of_thoughts[100];
	for (int i = 0; i < 13; ++i){
			str.str("");
			str << (i * i);
			array_of_thoughts[i] = "Happy Thoughts " + str.str();
	}

	Brain* smart = new Brain();
	for (int i = 0; i < 13; ++i)
		smart->setIdea(i, array_of_thoughts[i]);
	for (int i = 0; i < 13; ++i)
		std::cout << "Printing idea of smart brain: " << smart->getIdea(i)
		<< " with addr:\t" << &smart[i] << std::endl;

	Brain* crazy = new Brain(*smart);
	for (int i = 0; i < 13; ++i)
		std::cout << "Printing idea of crazy brain: " << crazy->getIdea(i)
		<< " with addr:\t" << &crazy[i] << std::endl;

	std::string error_test0 = "  ***  TEST failed !!  ***";
	std::string error_test1 = "  ***  TEST failed !!  ***";
	std::string error_test2 = "  ***  TEST failed !!  ***";
	smart->setIdea(0, error_test0);
	smart->setIdea(2, error_test1);
	smart->setIdea(7, error_test2);

	std::cout << "\n----------  output of the test  ------------\n"<<std::endl;

	for (int i = 0; i < 13; ++i)
		std::cout << "Printing idea of crazy brain: " << crazy->getIdea(i)
		<< " with addr:\t" << &crazy[i] << std::endl;

	delete smart;
	delete crazy;
}

int	main()
{
	// provided test
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* e = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << e->getType() << " " << std::endl;
	e->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n----------  wrong animal test  ------------\n"<<std::endl;
	const WrongAnimal* k = new WrongCat();
	std::cout << "*** WrongCat makes sound: ";
	k->makeSound();
	
	std::cout << "\n*** freeing the memory (objects) on the heap \n";
	delete meta;
	delete j;
	delete e;
	delete k;

	std::cout << "\n----------  allocation test  ------------\n"<<std::endl;
	Animal *pets[16];
	for (int i = 0; i < 16; ++i)
	{
		if (i % 2)
			pets[i] = new Dog();
		else
			pets[i] = new Cat();
	}
	// testing 
	for (int i = 0; i < 16; ++i)
		pets[i]->makeSound();

	for (int i = 0; i < 16; ++i)
		delete pets[i];

	std::cout << "\n----------  copy test  ------------\n"<<std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "\n----------  copy test  ------------\n"<<std::endl;

	Cat* test = new Cat();
	Cat* t2 = new Cat(*test);
	test->Print();
	t2->Print();
	delete test;
	delete t2;

	Cat* kitty = new Cat();
	Cat* kitten = new Cat(*kitty);

	kitty->Print();
	kitten->Print();
	delete kitten;
	delete kitty;

	Dog* labrador = new Dog();
	Dog* shapard = new Dog(*labrador);
	labrador->Print();
	shapard->Print();
	delete labrador;
	delete shapard;

	brain_test();
	return 0;
}

// https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/