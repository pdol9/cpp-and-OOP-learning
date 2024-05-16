/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:09:17 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 20:53:06 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA() : _personalWeapon(0) {

// 	return;
// }

HumanA::HumanA( std::string str, Weapon& object ) : _name(str), _personalWeapon(object) {

	return;
}

HumanA::~HumanA( void ) {
	
	return;
}

void	HumanA::attack() {
	
	std::cout << _name << " attacks with their " << _personalWeapon.getType() << std::endl;
}
