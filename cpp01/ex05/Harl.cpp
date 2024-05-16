/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:21:28 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 22:38:43 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return;
}

Harl::~Harl( void )
{
	return;
}

void	Harl::complain( std::string level )
{
	const std::string	actions[4]  = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*f[4])(void) = {&Harl::_debug, &Harl::_info, 
									&Harl::_warning, &Harl::_error};
	for (int i = 0; i < 4; ++i)
	{
		if (actions[i] == level)
			(this->*f[i])();
	}
}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my "\
	"7XL-double-cheese-triple-pickle-special-ketchup burger. "\
	"I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more "\
	"money. You didn’t put enough bacon in my burger! If you did, "\
	"I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for "\
	"free. I’ve been coming for years whereas you started working "\
	"here since last month." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "This is unacceptable! I want to speak to the "\
	"manager now." << std::endl;	
}
