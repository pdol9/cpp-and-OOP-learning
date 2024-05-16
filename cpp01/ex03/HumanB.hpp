/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:09:24 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 19:53:39 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:

	std::string	_name;
	Weapon*	_personalWeapon;

public:

	// HumanB();
	HumanB( const std::string str );
	~HumanB();

	void	attack();
	void	setWeapon( Weapon& obj );
};

#endif
