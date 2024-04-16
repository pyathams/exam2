/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:53:15 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 13:04:41 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int number;

	i = 0;
	number = 0;
	while (str[i])
	{
		number = number * 10 + str[i] - 48;
		i++; 
	}
	return (number);
}

void	print_hex(int nbr)
{
	char hex[] = "0123456789abcdef";
	if (nbr >= 16)
	{
		print_hex(nbr /16);
		print_hex(nbr % 16);
	}
	else
	{
		write(1, &hex[nbr], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}