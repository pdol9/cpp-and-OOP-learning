/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:12:40 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:12:46 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap " << _name << " : Default Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap: " << _name << " : Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << _name << " Destructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap()
{
	std::cout << "ScavTrap " << _name << " Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap " << _name << " Copy assignment operator called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints < 1 || CHECK_UINT(_hitPoints)) {
		std::cout << "ScavTrap " << _name << " is unable to attack --> Out of Energy / Hit points" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target
			<< " causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
	std::cout << " ** new status of Energy Points after attack is: " << _energyPoints << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (CHECK_UINT(_hitPoints))
	{
		std::cout << "ScavTrap " << _name << " is unable to guard: Out of Hit points" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is now in Mode: Gate Keeper" << std::endl;
}
