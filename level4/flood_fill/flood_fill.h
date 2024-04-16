/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:03:34 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/14 15:23:36 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void	fill(char **tab, t_point size, t_point begin, char to_fill);

#endif