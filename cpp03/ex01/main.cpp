/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:12:27 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:12:28 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap	a("Terminator");
	ClapTrap	b("Robot_42");
	ScavTrap	c("T-42");
	ScavTrap	d;

	// a.Print();
	d.Print();
	for (int i = 0; i < 5; ++i)
	{
		a.attack("T2");
		b.takeDamage(3);
	}
	b.beRepaired(4);
	a.guardGate();

	std::cout << "\n2nd round:\n" << std::endl;
	for (int i = 0; i < 7; ++i)
	{
		c.attack("Terminator");
		a.takeDamage(20);
	}
	a.beRepaired(4);
	a.attack("T2");
	a.guardGate();

	return 0;

}
