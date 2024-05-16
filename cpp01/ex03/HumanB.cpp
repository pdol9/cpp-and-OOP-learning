/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:09:22 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 19:53:57 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB() {

// 	return;
// }

HumanB::HumanB( const std::string str ) : _name(str) {
	
	return;
}

HumanB::~HumanB( void ) {
	
	return;
}

void	HumanB::attack() {
	
	std::cout << _name << " attacks with their " << _personalWeapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& obj ) {

	_personalWeapon = &obj;
}
