/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:15:09 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:15:48 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	FragTrap	a("Terminator");
	ClapTrap	b("newT2");
	FragTrap	c("T2000");
	DiamondTrap	d("Exterminator");

	a.attack("T2");
	b.takeDamage(3);
	b.beRepaired(4);

	c.highFivesGuys();
	d.whoAmI();
	for (int i = 0; i < 10; ++i)
	{
		d.attack("some random creature ...");
	}
	d.highFivesGuys();
	d.beRepaired(4);
	d.Print();
	return 0;

}
