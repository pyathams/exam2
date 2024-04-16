/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:06:40 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 13:37:13 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_captalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122 && (str[i + 1] == ' ' || str[i] == '	')) || (str[i + 1] == '\0' && str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		else if (str[i] >= 65 && str[i] <= 90 && (str[i + 1] >= 33 && str[i + 1] <= 126) && str[i + 1] != '\0')
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		int i;

		i = 1;
		while(i < argc)
		{
			rstr_captalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}