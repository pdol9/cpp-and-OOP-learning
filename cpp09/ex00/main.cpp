/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:10:42 by pdolinar          #+#    #+#             */
/*   Updated: 2023/03/14 15:46:03 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PriceDatabase.hpp"
#include "QuantDatabase.hpp"

void	displayValue(const PriceDatabase& db1, const QuantDatabase& db2);

void displayValue(const PriceDatabase& db1, const QuantDatabase& db2)
{
	std::deque<std::string>	btcQuant = db2.getFileContent();
	std::deque<std::string>	btcPrice = db1.getFileContent();
	// debug
	// std::cout << "Size of map: " << btcPrice.size() << std::endl;
	// std::cout << "Size of map: " << btcQuant.size() << std::endl;
	// for (auto it = map.begin(); it != map.end(); ++it) {
	//		std::cout << it->first << " --- " << it->second << std::endl;
	// }

	std::cout << "\nTEST_____: "<< std::endl;
	for (std::deque<std::string>::const_iterator it_1 = btcQuant.begin(); it_1 != btcQuant.end(); it_1++)
	{
		try {

			// process the line into date and value
			std::stringstream ss(*it_1);
			char	separator;
			std::string strDate, strValue;
			ss >> strDate >> separator >> strValue;
			// std::cout << "strDate: " << strDate << " separator: "<< separator<< " strValue: "<< strValue<<std::endl; 
			if (separator != '|')
				throw std::runtime_error("invalid format: " + separator);
			isValidDate(strDate);
			float val_1 = returnFloat(strValue, true);

			for (std::deque<std::string>::const_iterator it_2 = btcPrice.begin(); it_2 != btcPrice.end(); it_2++)
			{
				//char	sep = (*it_2)[10];
				std::string Date = (*it_2).substr(0, 10);
		        std::string Value = (*it_2).substr(11);
				// std::cout << "Date: " << Date << " separator: "<< sep<< " Value: "<< Value<<std::endl; 
				isValidDate(Date);
				float val_2 = returnFloat(Value, false);
				if (strDate == Date)
					std::cout << strDate << " => " << Value << " = " << (val_1 * val_2) << std::endl;
			}

		} catch (const std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << "END_____: "<< std::endl;
}

int main(int argc, char **argv)
{
	(void)argc;

	try {
		QuantDatabase	quantDB(argv[1]);
		PriceDatabase	priceDB("test.csv");

		quantDB.readDataBase();
		priceDB.readDataBase();
		displayValue(priceDB, quantDB);
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
