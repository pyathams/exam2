/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:06:49 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/13 15:02:14 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int number;

	i = 0;
	number = 0;
	while (str[i])
	{
		number = number * 10 + str[i++] - 48;
	}
	return (number);
}

int	check(int pm)
{
	int	i;

	i = 2;
	while (i * i <= pm)
	{
		if (pm % i == 0)
			return (0);
		i++;
	}
	return (1);
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
	return;
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