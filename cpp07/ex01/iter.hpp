/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:23:31 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:23:32 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T> void iter(T array[], int len, void (*f)(T))
{
	for (int i = 0; i < len; ++i)
	{
		f(array[i]);
	}
}

template<typename T> void swap(T& a, T& b)
{
	T t;

	t = a;
	a = b;
	b = t;
}

template<typename T> void bubbleSort(T a[], const int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; i < j; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}

template<typename T> void printFunc(const T a)
{
	std::cout << a << " ";
}

#endif
