/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:26:45 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 14:43:05 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{

	Zombie	One;
	One.setName("Kelly");
	One.announce();

	Zombie	Two("Sally");
	Two.announce();

	randomChump("Marry");

	PRINT('\n');
	
	Zombie*	Three = new Zombie;
	Three->setName("Barry");
	Three->announce();
	delete Three;
	
	PRINT("");

	Zombie* Four = new Zombie();
	Four->setName("Larry");
	Four->announce();
	delete Four;
	
	PRINT("");

	Zombie* Five = newZombie("Anny");
	(void)Five;

	PRINT('\n');

	delete Five;
	return 0;
}
