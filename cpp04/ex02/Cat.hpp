/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:29:10 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:29:11 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal {

private:

	Brain* _ptr;

public:

	Cat();
	virtual ~Cat();
	Cat( const Cat& other );
	Cat& operator=( const Cat& other );

	void makeSound() const;

};

#endif
