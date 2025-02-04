/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:02:09 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/04 16:55:52 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

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