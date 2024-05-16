/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:16:45 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:16:46 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template<typename T> void swap(T& a, T& b)
{
	T t;

	t = a;
	a = b;
	b = t;
}

template<typename T> T min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}

template<typename T> T max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

#endif
