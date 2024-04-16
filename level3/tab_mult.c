/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:18:23 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 14:32:56 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *srt)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (srt[i])
	{
		number = number * 10 + srt[i] - 48;
		i++;
	}
	return (number);
}

void	ft_putnbr(int nbr)
{
	char digit;
	
	if (nbr >= 10)
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
	else
	{
		digit = nbr + 48;
		write(1, &digit, 1);
	}
}

void	tab_mult(int nbr)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(nbr*i);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		tab_mult(ft_atoi(argv[1]));
	}
	else 
		write(1, "\n", 1);
	return (0);
}
