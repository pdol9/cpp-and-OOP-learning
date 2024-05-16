/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:09:21 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 20:46:04 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

private:

	std::string	_name;
	Weapon&	_personalWeapon;

public:

	// HumanA();
	HumanA( std::string str, Weapon& object );
	~HumanA();

	void	attack();

};

#endif
