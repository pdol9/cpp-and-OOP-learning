/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:12:54 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:12:55 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap " << _name << ": Default Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	std::cout << "FragTrap " << _name << " : Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << _name << " : Destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other) : ClapTrap()
{
	std::cout << "FragTrap " << _name << " : Copy constructor called" << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	std::cout << "FragTrap " << _name << " : Copy assignment operator called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << _name << " is saying: high Five Guys!" << std::endl;
}
