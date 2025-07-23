/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:26:51 by arosas-j          #+#    #+#             */
/*   Updated: 2024/10/28 17:23:39 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _size(0)
{
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &copy): _size(copy._size)
{
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = copy._array[i];
	}
}

template <typename T>
Array<T>::Array(unsigned int size): _size(size)
{
	_array = new T[_size];
}

template <typename T>
Array<T>::~Array()
{
	delete[] (_array);
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		delete[] (_array);
		_size = src._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
		{
			_array[i] = src._array[i];
		}
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size || index < 0)
	{
		throw (InvalidIndexException());
	}
	return (_array[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
const char *Array<T>::InvalidIndexException::what() const throw()
{
	return ("Invalid index");
}