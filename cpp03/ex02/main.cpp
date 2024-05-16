/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:12:57 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:12:58 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
	FragTrap	a("Terminator");
	FragTrap	a1;
	ClapTrap	b("T-42");
	FragTrap	c("T2000");

	a1.Print();
	a.Print();
	c.highFivesGuys();
	for (int i = 0; i < 5; ++i)
	{
		a.attack("T2000");
		c.takeDamage(30);
	}
	c.beRepaired(40);
	a.attack("T-42");
	b.takeDamage(30);
	b.beRepaired(4);

	return 0;

}
