/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:19:30 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 21:19:31 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl grumpy;
	
	if (ac != 2)
		return 1;
	grumpy.complain(av[1]);
	return 0;
}

// https://www.codeguru.com/cplusplus/c-tutorial-pointer-to-member-function/