/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:11:06 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:11:07 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
	Data* test = new Data;
	std::cout << "addr: " << test << std::endl;
	uintptr_t a = Serializer::serialize(test);

	Data* returnValue = Serializer::deserialize(a);
	std::cout << "addr: " << returnValue << std::endl;

	delete test;
	return 0;
}

// https://stackoverflow.com/questions/1845482/what-is-the-uintptr-t-data-type
// https://stackoverflow.com/questions/6326338/why-when-to-use-intptr-t-for-type-casting-in-c
