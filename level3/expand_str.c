/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:35:43 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 19:47:15 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	while (str[i] == ' ' || str[i] == '	')
	{
		str[i] = '\0';
		i--;
	}
	i = 0;
	while (str[i] == ' ' || str[i] == '	')
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '	')
		{
			while(str[i] == ' ' || str[i] == '	')
				i++;
			i = i - 1;
			write(1, "   ", 3);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
