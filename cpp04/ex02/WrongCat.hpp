/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:10 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:11 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
#define	WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {

private:

public:

	WrongCat();
	virtual ~WrongCat();
	WrongCat( const WrongCat& other );
	WrongCat& operator=( const WrongCat& other );

	void makeSound() const;

};

#endif
