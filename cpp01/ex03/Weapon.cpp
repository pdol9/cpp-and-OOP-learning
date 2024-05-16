/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:09:27 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 19:55:37 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("None") {

	return;
}

Weapon::Weapon( const std::string str ) : _type(str) {

	return;
}

Weapon::~Weapon( void ) {

	return;
}

const std::string&	Weapon::getType( void ) {

	return _type;
}

void	Weapon::setType( std::string str ) {

	_type = str;
}
