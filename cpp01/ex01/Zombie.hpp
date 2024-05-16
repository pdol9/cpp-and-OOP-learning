/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:44:47 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 14:53:05 by pdolinar         ###   ########.fr       */
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

Zombie*	zombieHorde( int N, std::string name );

#endif
