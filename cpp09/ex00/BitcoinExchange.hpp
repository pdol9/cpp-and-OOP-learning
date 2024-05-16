/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:12:27 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 14:36:49 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_HPP
#define __BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <deque>
#include <cstdlib>
#include <climits>
#include <sstream>
#include <ctime>
#include <exception>

float	returnFloat(const std::string& str, bool valueCheck);
void	isValidDate(const std::string& str);

#endif
