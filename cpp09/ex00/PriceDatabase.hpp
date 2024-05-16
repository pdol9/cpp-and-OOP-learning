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

#ifndef __PRICEDATABASE_HPP
#define __PRICEDATABASE_HPP

#include "Database.hpp"

class PriceDatabase : public Database {

	private:

	public:
		PriceDatabase();
		virtual ~PriceDatabase();
		PriceDatabase(const char *inputFile);
		PriceDatabase(const PriceDatabase& other);
		PriceDatabase& operator=(const PriceDatabase& other);
};

#endif
