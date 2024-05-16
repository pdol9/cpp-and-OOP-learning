/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:08:48 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 13:56:43 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

#define	PRINT(x)	std::cout << x << " >>  ---------  <<" << x << std::endl;

class Zombie {

private:

	std::string	_name;
	
public:

	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );

	void	announce( void );
	void	setName( std::string name );

};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
