/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:39:55 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/07 17:59:04 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	number;
	int	i;
	int	neg;

	i = 0;
	number = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == '	')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (neg * number);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d \n", ft_atoi(argv[1]));
	}
}
