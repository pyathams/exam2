/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:12:48 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/15 16:23:03 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 2;
	while (i <= n)
	{
		if (n == i)
			return (1);
		i = i * 2;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d \n",is_power_of_2(atoi(argv[1])));
	}
}
