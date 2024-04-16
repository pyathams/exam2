/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:35:15 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/13 18:07:15 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 'a' - 'A';
	return c;
}

int	atoi_base(char c, int str_base)
{
	int digit_max;

	if (str_base <= 10)
		digit_max = str_base + '0';
	else
		digit_max = str_base + 'a' - 10;
	if (c >= '0' && c <= '9' && c <= digit_max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= digit_max)
		return (c + 10 - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	digit;
	int sign = 1;

	i = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	result = 0;
	while ((digit = atoi_base(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		str++;
	}
	return (result);
}

int	main (int argc, char **argv)
{
	if (argc == 3)
	{
		int i = ft_atoi_base(argv[1], atoi(argv[2]));
		printf("%d", i);
	}
}
