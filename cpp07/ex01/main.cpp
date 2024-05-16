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

#include "iter.hpp"

int main()
{

	int arr[] = {0, 9, 1, 8, 2, 7, 3, 6, 4, 5};
	int len0 = *(&arr + 1) - arr;
	char arr_c[] = {'g','h','7','x','q','0','d'};
	int len1 = *(&arr_c + 1) - arr_c;
	std::string arr_s[] = {"hello", "I", "see", "new", "stuff", "every", "day"};
	int len2 = *(&arr_s + 1) - arr_s;
	

	std::cout << "Print elements of the Array:"<< std::endl;
	::iter(arr, len0, printFunc);
	std::cout << "\nPrint elements of the Array:"<< std::endl;
	::iter(arr_c, len1, printFunc);
	std::cout << "\nPrint elements of the Array:"<< std::endl;
	::iter(arr_s, len2, printFunc);


	std::cout << "\n\nafter sorting -->" << std::endl;
	::bubbleSort(arr, len0);
	std::cout << "\nPrint elements of the int Array:"<< std::endl;
	::iter(arr, len0, printFunc);
	::bubbleSort(arr_c, len1);
	std::cout << "\nPrint elements of the char Array:"<< std::endl;
	::iter(arr_c, len1, printFunc);
	::bubbleSort(arr_s, len2);
	std::cout << "\nPrint elements of the std::string Array:"<< std::endl;
	::iter(arr_s, len2, printFunc);
	std::cout << std::endl;
	return 0;

}
