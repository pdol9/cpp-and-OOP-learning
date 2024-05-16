/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:12:56 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:12:57 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

private:

public:

	FragTrap( void );
	~FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap& other );
	FragTrap& operator=( const FragTrap& other );
	
	void highFivesGuys(void);

};

#endif
