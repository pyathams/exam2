/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:15:56 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/13 18:22:37 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}  		t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list *temp;
	int	i;

	i = 0;
	temp = begin_list;
	while(temp != NULL)
	{
		i++;
		temp = temp -> next;
	}
	return (i);
}

int	ft_list(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list(begin_list -> next));
}