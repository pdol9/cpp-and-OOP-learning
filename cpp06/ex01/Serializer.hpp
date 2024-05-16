/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:10:19 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:10:20 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <stdint.h>

class Serializer {

private:

public:

	Serializer();	
	~Serializer();
	Serializer(const Serializer& other);	
	Serializer& operator=(const Serializer& other);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

};

#endif
