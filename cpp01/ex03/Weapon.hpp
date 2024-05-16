/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:09:29 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 19:54:26 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

private:

	std::string _type;

public:

	Weapon( void );
	~Weapon( void );
	Weapon( const std::string str );

	const std::string& getType( void );
	void	setType( std::string str );

};

#endif
