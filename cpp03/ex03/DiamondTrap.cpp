/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:13:09 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:15:35 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap: Default Constructor called" << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap(name)
	, FragTrap(name)
	, ScavTrap(name)
{
	_name = name + "_clap_name";
	std::cout << "DiamondTrap " << _name << ": Constructor called" << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "I AM DiamondTrap and my name is: " << _name << " and ClapTrap's name is: " << ClapTrap::_name << std::endl;
	return;
}
