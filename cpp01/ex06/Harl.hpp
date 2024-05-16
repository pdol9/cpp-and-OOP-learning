/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:20:20 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 22:21:35 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
	
private:

	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );

public:

	Harl( void );
	~Harl( void );
	
	void    complain( std::string level );
	
};

#endif
