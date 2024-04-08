/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:12:23 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 14:41:20 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	union1(char *str1, char *str2)
{
	int	i;
	int	ascii[256];

	i = 0;
	while (i < 256)
	{
		ascii[i] = 0;
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (ascii[(int)str1[i]] == 0)
		{
			ascii[(int)str1[i]] = 1;
			write(1, &str1[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (ascii[(int)str2[i]] == 0)
		{
			ascii[(int)str2[i]] = 1;
			write (1, &str2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		union1(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
