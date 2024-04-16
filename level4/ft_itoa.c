/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:10:15 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 17:44:01 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	count(int nbr)
{
	int counter;
	counter = 0;
	if (nbr <= 0)
		counter = 1;
	while (nbr)
	{
		nbr = nbr/10;
		counter++;
	}
	return (counter);
}

char *ft_itoa(int nbr)
{
	char *string;
	int counter = count(nbr);
	int i;

	i = 0;
	string = (char *)malloc((counter + 1) * sizeof(char *));
	if (string == NULL)
		return (NULL);
	string[counter] = '\0';
	if (nbr == -2147483648)
	{
		string[0] = '-';
		string[1] = '2';
		nbr = 147483648;
		i = 2;
	}
	if (nbr < 0)
	{
		string[0] = '-';
		nbr = -nbr;
		i = 1;
	}
	while (counter-- > i)
	{
		string[counter] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (string);
}

int	main(void)
{
	char *str=ft_itoa(214);
	printf("%s a\n",str);
	//free (str);
}