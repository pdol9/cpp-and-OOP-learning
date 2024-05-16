/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:22:01 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/23 20:28:26 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal {

	protected:
		std::string _type;

	public:

		Animal();
		virtual ~Animal();
		Animal( const Animal& other );
		Animal& operator=( const Animal& other );
		
		virtual void	makeSound() const;
		std::string		getType( void ) const;
		void			Print();
};

#endif

