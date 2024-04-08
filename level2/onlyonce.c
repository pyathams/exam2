/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onlyonce.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:55:52 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 18:58:56 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	check(char *ptr, char c)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	function(char *s, char *s1)
{
	char	*ptr ;
	int		i;
	int		j;

	ptr = (char *)malloc(sizeof(char) * (strlen(s) + 1)); // Allocate memory for ptr
	if (ptr == NULL) 
	{
		return;
    }
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!check(ptr, s[i]))
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	j = 0;
	i = 0;
	while (ptr[i])
	{
		if (check(s1, ptr[i]))
		{
			write(1, &ptr[i], 1);
		}
		i++;
	}
	free(ptr);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		function(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
