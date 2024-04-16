/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:31:45 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/12 18:01:33 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char temp;

	i = -1;
	j = 0;
	while (str[j])
	{
		j++;
	}
	while (++i < j / 2)
	{
		temp = str[i];
		str[i] = str[j - 1 - i];
		str[j - 1 - i] = temp;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", ft_strrev(str));
}