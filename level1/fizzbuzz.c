/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:30:28 by pyathams          #+#    #+#             */
/*   Updated: 2024/03/28 21:44:27 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n)
{
	int	digit;

	if (n > 9)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else if (n <= 9)
	{
		digit = n + '0';
		write(1, &digit, 1);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 9);
		else if (i % 3 == 0)
			write(1, "fizz", 5);
		else if (i % 5 == 0)
			write(1, "buzz", 5);
		else
		{
			putnbr(i);
		}
		write(1, "\n", 1);
		i++;
	}
}