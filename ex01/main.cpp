/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:54:02 by arosas-j          #+#    #+#             */
/*   Updated: 2024/10/28 14:08:12 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void	increment(int &n)
{
	n++;
}

void	printInt(int &n)
{
	std::cout << n << " ";
}

void	appendExclamation(std::string &s)
{
	s += "!";
}

void	printString(std::string &s)
{
	std::cout << s << " ";
}

int	main(void)
{
	int intArray[] = {1, 2, 3, 4, 5};
	int intLength = sizeof(intArray) / sizeof(int);

	std::cout << "Original int array: ";
	iter(intArray, intLength, printInt);
	std::cout << std::endl;

	iter(intArray, intLength, increment);

	std::cout << "Incremented int array: ";
	iter(intArray, intLength, printInt);
	std::cout << std::endl;

	std::string strArray[] = {"Hello", "World", "42"};
	int strLength = sizeof(strArray) / sizeof(std::string);

	std::cout << "Original string array: ";
	iter(strArray, strLength, printString);
	std::cout << std::endl;

	iter(strArray, strLength, appendExclamation);

	std::cout << "Modified string array: ";
	iter(strArray, strLength, printString);
	std::cout << std::endl;

    return (0);
}