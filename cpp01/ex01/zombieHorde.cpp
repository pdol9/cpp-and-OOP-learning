/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:44:49 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 16:49:26 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {

	if (!N)
		return NULL;
	
	Zombie* ptr = new Zombie[N];
	for (int i = 0; i < N; i++)
		ptr[i].setName(name);
	
	return ptr;
}
