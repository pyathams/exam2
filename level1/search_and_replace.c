/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:12:42 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/02 21:26:30 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char s, char r)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == s)
		{
			str[i] = r;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	write (1, "\n", 1);
	return (0);
}