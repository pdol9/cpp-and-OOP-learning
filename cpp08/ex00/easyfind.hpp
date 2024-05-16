/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:30:48 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:30:49 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#define LOG(s) std::cout << s << std::endl

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template<typename T>
bool	easyFind(const T& para, int n)
{
    typename T::const_iterator it = para.begin();
    typename T::const_iterator end = para.end();
    for (; it != end; ++it) {
        if (*it == n)
            return true;
    }
    return false;
}

#endif
