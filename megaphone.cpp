/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:02:09 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/04 13:33:20 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>

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
				if (av[i + 1][j] >= 'a' && av[i + 1][j] <= 'z')
				{
					printf("%c", (av[i + 1][j]) - 32);
				}
				else
				{
					printf("%c", (av[i + 1][j]));
				}
				j++;
			}
			i++;
		}
	}
	else
	{
		printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	}
	printf("\n");
	return (0);
}