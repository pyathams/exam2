/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:43:33 by pyathams          #+#    #+#             */
/*   Updated: 2024/03/29 21:35:09 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	counts(char c)
{
	int	i;
	char b;

	i = 1;
	if (c >= 'a' && c <= 'z')
		b = 97;
	else if (c >= 'A' && c <= 'Z')
		b = 65;
	else
	{
		b = 0;
		c = 0;
	}
	while (b != c)
	{
		i++;
		b = b + 1;
	}
	return (i);
}

int main(int argc, char **argv)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			count = counts(argv[1][i]);
			while (count)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			count = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}