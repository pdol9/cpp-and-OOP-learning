/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:10:22 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:10:23 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}

Data::~Data() {}

Data::Data(const Data& other) { *this = other; }

Data& Data::operator=(const Data& other) { (void)other; return *this; }
