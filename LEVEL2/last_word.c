/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:07:03 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/12 19:31:40 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	while (str[i] == ' ' || str[i] == '	')
		i--;
	while (str[i] >= 33 && str[i] <= 126)
		i--;
	i = i + 1;
	while (str[i] >= 33 && str[i] <= 126)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}