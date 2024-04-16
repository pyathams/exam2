/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:03:07 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/12 20:02:24 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	check(const char *accept, char c)
{
	int	i;

	i = 0;
	while (accept[i])
	{
		if (accept[i] == c)
			return (0);
		i++;
	}
	return (1);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (check(accept, s[i]))
			break ;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%ld \n", ft_strspn("zpppprashanth125125", "prashanth125"));
	printf("%ld \n", strspn("zpppprashanth125125", "prashanth125"));
}