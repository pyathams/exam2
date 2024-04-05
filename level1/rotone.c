/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:11:46 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/02 19:19:43 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') 
			|| (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] = str[i] + 1;
			write (1, &str[i], 1);
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			str[i] = str[i] - 25;
			write (1, &str[i], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

int	main(int arc, char **argv)
{
	if (arc == 2)
	{
		rotone(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}