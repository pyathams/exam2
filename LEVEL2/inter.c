/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:39:38 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/12 18:49:14 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *str1, char *str2)
{
	int	i;
	int ascii[256] = {0};

	i = 0;
	while(str2[i])
	{
		if (ascii[(int)str2[i]] == 0)
			ascii[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while(str1[i])
	{
		if (ascii[(int)str1[i]] == 1)
			ascii[(int)str1[i]] = 2;
		else if (ascii[(int)str1[i]] == 2)
			ascii[(int)str1[i]] = 3;
		if (ascii[(int)str1[i]] == 2)
			write(1, &str1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}