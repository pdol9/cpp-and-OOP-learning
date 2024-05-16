/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:13 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:14 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {

private:

	Brain* _ptr;

public:

	Dog();
	virtual ~Dog();
	Dog( const Dog& other );
	Dog& operator=( const Dog& other );

	void makeSound() const;

};

#endif





// https://wiki.sei.cmu.edu/confluence/display/cplusplus/OOP52-CPP.+Do+not+delete+a+polymorphic+object+without+a+virtual+destructor