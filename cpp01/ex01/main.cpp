/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:44:56 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 16:49:47 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	int n = 8;
	Zombie* horde = zombieHorde(n, "Terminator ");
	
	PRINT('\n');
	for (int i = 0; i < n; i++)
		horde[i].announce();
	PRINT('\n');
		

	delete[] horde;
	return 0;
}
