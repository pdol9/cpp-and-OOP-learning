/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:15:16 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/07 01:15:17 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T>
class Array {

private:
	unsigned int	_size;
	T* 				_arr;

public:

	Array()
		: _size(0)
		, _arr(NULL)
	{}

	~Array()
	{
		if (_size > 0) {
			delete [] _arr;
		}
	}

	Array( unsigned int n )
		: _size(n)
		, _arr(new T [n] ())
	{}

	Array( const Array& other )
	{
		_size = other._size;
		_arr = new T [_size] ();
		for (unsigned int i = 0; i < _size; ++i)
		{
			_arr[i] = other._arr[i];
		}
	}

	Array& operator=( const Array& other )
	{
		if (_size > 0)
			delete [] _arr;
		_size = other._size;
		_arr = new T [_size] ();
		for (unsigned int i = 0; i < _size; ++i)
		{
			_arr[i] = other._arr[i];
		}
		return *this;
	}

	unsigned int size() const
	{
		return _size;
	}

	T& operator[]( unsigned int n )
	{
		if (n >= _size)
			throw (Array::OutOfRangeException());
		return _arr[n];
	}

	class OutOfRangeException : public std::exception {
	public:
		virtual const char *what() const throw () {return "OutOfRangeIndex";}
	};

	void	Print() {
		for (unsigned int i = 0; i < _size; ++i)
			std::cout << _arr[i] << " ";
		std::cout << "\n";
	}
};

#endif
