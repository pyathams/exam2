/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:46:29 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 12:56:40 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (j < len)
	{
		if (i < tab[j])
			i = tab[j];
		j++;
	}
	return (i);
}

int	main(void)
{
	int	s[] = {1, 2, 3, 4, 5, 8, 30, 25};

	printf("%d \n", max(s, sizeof(s)/sizeof(int)));
}