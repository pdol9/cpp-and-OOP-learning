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

#ifndef __QUANTDATABASE_HPP
#define __QUANTDATABASE_HPP

#include "Database.hpp"

class QuantDatabase : public Database {

	private:
	
	public:
		QuantDatabase();
		virtual ~QuantDatabase();
		QuantDatabase(const char *inputFile);
		QuantDatabase(const QuantDatabase& other);
		QuantDatabase& operator=(const QuantDatabase& other);
};

#endif
