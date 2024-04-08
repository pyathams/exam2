/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:42:56 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 15:17:33 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][++i])
		{
			if (argv[2][i] == argv[1][j])
				j++;
		}
		i = 0;
		if (argv[1][j] == '\0')
		{
			while (argv[1][i])
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
		return (0);
	}
}
