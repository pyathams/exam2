/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:53:11 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/15 15:58:53 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	check(char *accept, char c)
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
	size_t i;

	i = 0;
	while (s[i])
	{
		if (check(accept, s[i]))
			break;
		i++;
	}
	return (i);
}