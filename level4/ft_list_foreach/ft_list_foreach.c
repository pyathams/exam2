/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:56:14 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 18:03:38 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_foreach.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *temp;

	temp = begin_list;
	while (temp != NULL)
	{
		(*f)(temp -> data);
		temp = temp -> next;
	}
}
