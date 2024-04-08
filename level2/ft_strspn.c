/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:48:27 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 12:18:30 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

int	check(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
			return (0);
		++s;
	}
	return (1);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (check(accept, s[i]))
			break;
		++i;
	}
	return (i);

}

int	main(void)
{
	printf("%lu\n", ft_strspn("hellotf", "helloggg"));
	printf("%lu\n", strspn("hellotf", "helloggg"));
}