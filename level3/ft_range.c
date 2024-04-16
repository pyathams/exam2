/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:37:22 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/13 18:50:23 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int length;
	int i;
	int *list;

	i = 0;
	length = abs(start - end) + 1;
	list = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		if (start < end)
		{
			list[i] = start;
			start++;
			i++;
		}
		else
		{
			list[i] = start;
			start--;
			i++;
		}
	}
	i = 0;
	while (list[i])
	{
		printf("%d \n" ,list[i]);
		i++;
	}
	return (list);
}

int	main(int argc, char **argv)
{

	if (argc == 3)
	{
		ft_range(atoi(argv[1]), atoi(argv[2]));
	}
}