/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:11:22 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:11:23 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main()
{
    srand(time(NULL));
    std::cout << "Identify derived clases using pointers and references." << std::endl;
    for (int i = 0; i < 16; ++i)
    {
        Base *a = generate();
        identify(a);
        std::cout << " - ";
        identify(*a);
        std::cout << "\n";
        delete a;
    }

    return 0;
}
