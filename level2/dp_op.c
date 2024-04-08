/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:35:54 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/05 21:29:17 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	do_p(char *str1, char *str, char *str2)
{
	long	k;
	int		i;
	int		j;

	k = 0;
	i = atoi(str1);
	j = atoi(str2);
	if (str[1])
		return ;
	if (str[0] == '+')
		k = i + j;
	else if (str[0] == '-')
		k = i - j;
	else if (str[0] == '/')
		k = i / j;
	else if (str[0] == '%')
		k = i % j;
	else if (str[0] == '*')
		k = i * j;
	printf("%ld \n", k);
	return ;
}


int	main(int argc, char **argv)
{
	if (argc != 4)
		write (1, "\n", 1);
	if (argc == 4)
	{
		do_p(argv[1], argv[2], argv[3]);
	}
	return (0);
}
