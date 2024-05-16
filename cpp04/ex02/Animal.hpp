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

class	AAnimal {

	protected:
		std::string _type;

	public:

		AAnimal();
		virtual ~AAnimal();
		AAnimal( const AAnimal& other );
		AAnimal& operator=( const AAnimal& other );
		
		virtual void	makeSound() const = 0;
		std::string		getType( void ) const;
		void			Print();
};

#endif

