/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizecopy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:43:23 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 16:03:03 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	str_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (97 <= str[0] && str[0] <= 122)
		{
			str[0] -= 32;
			// write (1, &str[0], 1);
		}
		if ((97 <= str[i] && str[i] <= 122) && (str[i - 1] == 32 || str[i - 1] == 9))
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc > 1)
	{
		while (argv[i])
		{
			str_capitalizer(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}