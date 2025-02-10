/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:02:09 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/10 10:44:45 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

/**
 * @brief Converts command line arguments to uppercase and prints them
 *
 * This program takes command line arguments and converts them to uppercase.
 * If no arguments are provided, it prints a feedback noise message.
 *
 * @param ac Number of command line arguments
 * @param av Array of command line argument strings
 * @return int Returns 0 on successful execution
 *
 * Example usage:
 * ./megaphone "hello world"   -> outputs: HELLO WORLD
 * ./megaphone                 -> outputs: * LOUD AND UNBEARABLE FEEDBACK NOISE *
 */

int main (int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac > 1)
	{
		while (i < ac - 1)
		{
			j = 0;
			while (av[i + 1][j])
			{
				std::cout << (char)std::toupper(av[i + 1][j]);
				j++;
			}
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}