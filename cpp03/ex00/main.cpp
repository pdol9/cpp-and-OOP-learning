/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:08:53 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:08:57 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	a("Terminator");
	ClapTrap	b("T2");
	ClapTrap	c("grinder");

	for (int i = 0; i < 11; ++i)
	{
		b.beRepaired(i);
	}
	b.attack("Terminator"); 
	for (int i = 0; i < 12; ++i)
	{
		a.attack("T2");
		c.takeDamage(3);
	}
	b.beRepaired(2);
	c.beRepaired(12);
	b.attack("Terminator");
	return 0;

}
