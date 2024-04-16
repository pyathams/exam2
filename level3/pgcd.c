/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:17:22 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 12:48:51 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

unsigned int	hcf(unsigned a, unsigned b)
{
	int temp;

	while(b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

void	putnbr(int nbr)
{
	char digit;

	if (nbr >=10)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else
	{
		digit = nbr + 48;
		write(1, &digit, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		putnbr(hcf(atoi(argv[1]), atoi(argv[2])));
	}
	write(1, "\n", 1);
}
