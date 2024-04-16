/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:20:42 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/12 16:31:10 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				return ((char *)s1 + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_strpbrk("hello", "mano"));
	printf("%s", strpbrk("hello", "mano"));
}