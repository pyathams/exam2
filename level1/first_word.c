/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:40:41 by pyathams          #+#    #+#             */
/*   Updated: 2024/03/28 21:22:48 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	function(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] == 32 || argv[i] == 9)
		i++;
	while ((argv[i] != 32 || argv[i] == 9) && argv[i])
		write(1, &argv[i++], 1);
}

int	main(int arc, char **argv)
{
	if (arc == 2)
	{
		function(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}