/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:04:17 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/15 16:06:40 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char bits;
	int i = 8;
	while (i-- > 0)
	{
		bits = (octet >> i & 1) + 48;
		write(1, &bits, 1);
	}
}