/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:17:40 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 21:52:20 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl grumpy;
	// std::string	str;
	
	// while (std::getline(std::cin, str)) {
	// 	grumpy.complain(str);
	// }

	grumpy.complain("DEBUG");
	grumpy.complain("INFO");
	grumpy.complain("WARNING");
	grumpy.complain("ERROR");
	grumpy.complain("");
	grumpy.complain("XXXXXX RANDOM");

	return 0;
}
