/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:37:36 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/08 16:40:23 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reverse;
	int	i;

	i = 8;
	reverse = 0;
	while (i--)
	{
		reverse = reverse * 2 + (octet % 2);
		octet = octet / 10;
	}
	return (reverse);
}