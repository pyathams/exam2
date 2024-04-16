/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:51:00 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/12 19:00:07 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 2;
	while (n)
	{
		if (i == n)
			return 1;
		else if (i > n)
			return (0);
		i = i * 2;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", is_power_of_2(atoi(argv[1])));
	}
}
