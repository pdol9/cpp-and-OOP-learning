/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:08:45 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 14:10:33 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("unnamed_zombie") {

	std::cout << "New zombie created: "<< _name <<" & address of the instance: " << this << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name) {

	std::cout << "New zombie created: " << name << " & address of the instance: " << this << std::endl;
}

Zombie::~Zombie( void ) {

	std::cout << _name << " is gone; & address of the instance: " << this << std::endl;
}

void	Zombie::announce( void ) {

	std::cout << _name << ": BraiiiiiiinnnzzzZ... " << this << std::endl;
}

void	Zombie::setName( std::string name ) {

	_name = name;
}
