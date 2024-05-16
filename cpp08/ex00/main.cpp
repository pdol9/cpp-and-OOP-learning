/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:31:40 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:31:41 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	/* vector */
	std::vector<int> num_vector(11);
	std::list<int> num_list(42);
	std::deque<int> num_de(21);

	for (std::vector<int>::iterator it = num_vector.begin();
		it != num_vector.end(); ++it)
		*it = 42;

	easyFind(num_vector, 5) ? LOG("found a match") : LOG("didn't find a match");
	LOG("Let's add some numbers ...");
	for (int i = 0; i < 5; ++i)
		num_vector.push_back(i + 1);
	easyFind(num_vector, 5) ? LOG("found a match") : LOG("didn't find a match");

	/* list */
	int j = 0;
	for (std::list<int>::iterator it = num_list.begin();
		it != num_list.end(); ++it) {
		j += 2;
		*it = j * 2;
	}

	easyFind(num_list, 5) ? LOG("found a match") : LOG("didn't find a match");
	LOG("Let's add some numbers ...");
	for (int i = 0; i < 5; ++i)
		num_list.push_back(i + 1);

	easyFind(num_list, 5) ? LOG("found a match") : LOG("didn't find a match");
	LOG(num_list.front());
	LOG(num_list.back());

	/* deque */
	LOG(num_de.size());

	for (unsigned int i = 0; i < num_de.size(); ++i)
		num_de[i] = i + 11;

	easyFind(num_de, 5) ? LOG("found a match") : LOG("didn't find a match");
	for (unsigned int i = 0; i < num_de.size(); ++i)
		num_de[i] = (i + 1) * 5;

	LOG(num_de.front());
	LOG(num_de.back());
	easyFind(num_de, 5) ? LOG("found a match") : LOG("didn't find a match");
	
	return 0;
}
