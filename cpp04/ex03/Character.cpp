/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:10 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:11 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("None")
{

}

Character::~Character()
{
	if (_slots != NULL)
		delete _slots;
}

Character::Character(std::string& name) : _name(name)
{

}

Character::Character(const Character& other)
{
	*this = other;	
}

Character& Character::operator=(const Character& other)
{
	_name = other._name;
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
	AMateria::use(target);
}
