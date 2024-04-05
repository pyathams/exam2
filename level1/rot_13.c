/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:48:12 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/02 19:07:14 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'N' && str[i] <= 'Z') 
			|| (str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] = str[i] - 13;
			write (1, &str[i], 1);
		}
		else if ((str[i] >= 'A' && str[i] <= 'M') 
			|| (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] = str[i] + 13;
			write (1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int arc, char **argv)
{
	if (arc == 2)
	{
		rot(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}