/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:10:27 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 12:16:04 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nbr)
{
	char digits;

	if (nbr >= 10)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else 
	{
		digits = nbr + 48;
		write(1, &digits, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argv[0])
	{
		putnbr(argc - 1);
		write (1, "\n", 1);
		return (0);
	}
}