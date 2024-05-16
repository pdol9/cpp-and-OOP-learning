/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:10 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:11 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:

	Ice();
	~Ice();
	Ice( const Ice& other );
	Ice& operator=( const Ice& other );

	AMateria* clone() const;
	void use( ICharacter& target );
};

#endif
