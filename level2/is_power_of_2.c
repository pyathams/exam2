/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:19:12 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 12:28:17 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n)
	{
		i = i * 2;
		if (i == n)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", is_power_of_2(atoi(argv[1])));
	}
	printf("\n");
}
