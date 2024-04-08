/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:27:41 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/07 19:33:29 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	while (i--)
	{
		dest[j++] = str[i];
	}
	dest[j] = '\0';
	return (dest);
}