/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:44:51 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 14:51:46 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("unnamed_zombie") {

	std::cout << "New zombie instance created: "<< _name << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name) {

	std::cout << "New named zombie created: " << name << std::endl;
}

Zombie::~Zombie( void ) {

	std::cout << _name << " is gone now." << std::endl;
}

void	Zombie::announce( void ) {

	std::cout << _name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}

void	Zombie::setName( std::string name ) {

	_name = name;
}
