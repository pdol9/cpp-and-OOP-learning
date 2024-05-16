/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:08:43 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:12:11 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
		: _name("Generic")
		, _hitPoints(0)
		, _energyPoints(0)
		, _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name )
		: _name(name)
		, _hitPoints(10)
		, _energyPoints(10)
		, _attackDamage(0)
{
	std::cout << "Claptrap " << _name << " : constructor called " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string& target )
{
	if (_energyPoints < 1 || CHECK_UINT(_hitPoints)) {
		std::cout << "ClapTrap " << _name << " is unable to attack >> Out of Energy / Hit points" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
			<< " causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
	std::cout << " ### new status of Energy Points after attacking is: " << _energyPoints << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	_hitPoints -= amount;
	if (_energyPoints < 1 || CHECK_UINT(_hitPoints)) {
		std::cout << "ClapTrap " << _name << " is unable to respond --> Out of Energy / Hit points" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage after being attacked" << std::endl;
	std::cout << " ** new status of Hit Points after being attacked: " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_energyPoints < 1 || CHECK_UINT(_hitPoints)) {
		std::cout << "ClapTrap " << _name << " is unable to self-repaire by " << amount << " --> Out of Energy / Hit points" << std::endl;
		return;
	}
	std::cout << "ClapTrap "<< _name << " is self-repairing by " << amount << std::endl;
	_hitPoints += amount;
	_energyPoints--;
	std::cout << " --- new status of Energy Points after self-repairing is: " << _energyPoints << " ---" << std::endl;
	std::cout << " --- new status of Hit Points after self repairing is: " << _hitPoints << " ---" << std::endl;
}

void	ClapTrap::Print()
{
	std::cout << "  ******************************** " << std::endl;
	std::cout << "  --- "<< _name << "  --- " << std::endl;
	std::cout << "  --- "<< _hitPoints << "  --- " << std::endl;
	std::cout << "  --- "<< _energyPoints << "  --- " << std::endl;
	std::cout << "  --- "<< _attackDamage << "  --- " << std::endl;
	std::cout << "  ******************************** " << std::endl;
}
