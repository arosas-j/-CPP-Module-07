/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:09:07 by arosas-j          #+#    #+#             */
/*   Updated: 2024/10/28 17:21:03 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class	Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int size);
		Array(const Array &copy);
		~Array();
		Array			&operator=(const Array &src);
		T				&operator[](unsigned int index);
		unsigned int	size(void) const;
		
		class			InvalidIndexException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

# include "Array.tpp"

#endif