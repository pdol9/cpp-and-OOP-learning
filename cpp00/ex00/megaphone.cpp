/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:30:14 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 14:02:07 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	
	if (ac == 1) {
		std::cout << ("* LOUD AND UNBEARABLE FEEDBACK NOISE *") << std::endl;
		return 0;
	}
	for (int i = 1; av[i]; i++) {
		
		std::string str (av[i]);
		for (size_t j = 0; j < str.length(); j++)
			std::cout << static_cast<char>(std::toupper(str[j]));
		std::cout << ' ';
	}
	std::cout << std::endl;
	return 0;
}
