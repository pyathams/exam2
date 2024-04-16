/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:51:02 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/13 18:56:00 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int length = abs(start - end) + 1;
	int *list = (int*)malloc(length * sizeof(char));

	while (i < length)
	{
		if (start < end)
		{
			list[i] = end;
			end--;
			i++;
		}
		else 
		{
			list[i] = end;
			end++;
			i++;
		}
	}
	return (list);
}
