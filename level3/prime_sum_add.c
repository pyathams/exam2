/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime_sum_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:42:39 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/13 15:52:10 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int digit;

	digit = 0;
	while (*str)
	{
		digit = digit * 10 + *str - 48;
		str++;
	}
	return (digit);
}

void	putnbr(int nbr)
{
	char digit;

	if (nbr >= 10)
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

int	check(int nbr)
{
	int i;

	i = 2;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}


int	main(int argc, char **argv)
{
	int	pm;
	int	add;

	pm = 2;
	add = 0;
	if (argc == 2)
	{
		if (pm <= ft_atoi(argv[1]))
		{
			while (pm <= ft_atoi(argv[1]))
			{
				if (check(pm))
					add = add + pm;
				pm++;
			}
			putnbr(add);
		}
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
