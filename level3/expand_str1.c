/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:10:34 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/13 16:17:51 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '	')
		{
			while(str[i] == ' ' || str[i] == '	')
				i++;
			if (str[i] == '\0')
				break;
			write(1, "   ", 3);
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	write(1, "\n", 1);
}