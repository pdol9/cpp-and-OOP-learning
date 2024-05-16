/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:13:24 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:13:25 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	/* int */
	int * a = new int();
	*a = 42;
	std::cout << "a = " << *a << std::endl;
	delete a;
	Array<int> test1;
	std::cout << "size of the test1: " << test1.size() << std::endl;
	Array<int> test2(5);
	Array<int> test3(test2);
	Array<int> test4(10);
	Array<int> test5;
	

	for (unsigned int i = 0; i < test2.size(); ++i)
		test2[i] = i * 10;
	for (unsigned int i = 0; i < test4.size(); ++i)
		test4[i] = i * 2;
	
	test5 = test4;
	
	std::cout << "array test2: " << std::endl;
	test2.Print();
	std::cout << "array test3: " << std::endl;
	test3.Print();
	std::cout << "array test4: " << std::endl;
	test4.Print();
	std::cout << "array test5: " << std::endl;
	test5.Print();

	std::cout << "\n >> Testing index access of array test5:" << std::endl;
	try {
		std::cout << test5[4] << std::endl;
		std::cout << test5[42] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << test5[-42] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	/* char */

	char * c = new char();
	*c = '4';
	std::cout << "\nc = " << *c << std::endl;
	delete c;
	Array<char> chartest1;
	std::cout << "size of the char test1: " << test1.size() << std::endl;
	Array<char> chartest2(5);
	Array<char> chartest3(chartest2);
	Array<char> chartest4(10);
	Array<char> chartest5;

	for (unsigned int i = 0; i < chartest2.size(); ++i)
		chartest2[i] = 'a' + 10 + i;
	for (unsigned int i = 0; i < chartest4.size(); ++i)
		chartest4[i] = 'A' + 2 + i;
	
	chartest5 = chartest4;
	
	std::cout << "array test2: " << std::endl;
	chartest2.Print();
	std::cout << "array test3: " << std::endl;
	chartest3.Print();
	std::cout << "array test4: " << std::endl;
	chartest4.Print();
	std::cout << "array test5: " << std::endl;
	chartest5.Print();

	std::cout << "\n >> Testing index access of char array test5: " << std::endl;
	try {
		std::cout << chartest5[4] << std::endl;
		std::cout << chartest5[42] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << chartest5[-42] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}



	/* std::string */

	std::string *str = new std::string();
	*str = "42";
	std::cout << "str = " << *str << std::endl;
	delete str;
	Array<std::string> s_test1;
	std::cout << "size of the test1: " << s_test1.size() << std::endl;
	Array<std::string> s_test2(5);
	Array<std::string> s_test3(s_test2);
	Array<std::string> s_test4(10);
	Array<std::string> s_test5;
	

	std::string s[] = {"a1", "b2", "c3", "d4", "e5"};
	for (unsigned int i = 0; i < s_test2.size(); ++i)
		s_test2[i] = "hello::" + s[i % 5];
	for (unsigned int i = 0; i < s_test4.size(); ++i)
		s_test4[i] = "test--" + s[i % 5];
	
	s_test5 = s_test4;
	
	std::cout << "array s_test2: " << std::endl;
	s_test2.Print();
	std::cout << "array s_test3: " << std::endl;
	s_test3.Print();
	std::cout << "array s_test4: " << std::endl;
	s_test4.Print();
	std::cout << "array s_test5: " << std::endl;
	s_test5.Print();

	std::cout << "\n >> Testing index access of array s_test5:" << std::endl;
	try {
		std::cout << s_test5[4] << std::endl;
		std::cout << s_test5[42] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << s_test5[-42] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
