/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:59:20 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 13:24:49 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bits;

	i = 8;
	while (i--)
	{
		bits = (octet >> i & 1) + '0';
		write (1, &bits, 1);
	}
}

int	main(void)
{
	print_bits(10);
	write(1, "\n", 1);
	return (0);
}