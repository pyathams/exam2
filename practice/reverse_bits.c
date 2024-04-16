/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:59:31 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/15 16:02:14 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rev = 0;
	int	i = 8;

	while (i > 0)
	{
		rev = rev * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (rev);
}
