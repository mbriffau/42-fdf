/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 04:25:10 by mbriffau          #+#    #+#             */
/*   Updated: 2017/08/22 00:12:17 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_3d	*t_3d_malloc(t_3d *d)
{
	if (!(d = malloc(sizeof(t_3d))))
		return (0);
	d->x_map = 0;
	d->y_map = 0;
	d->height_map = 0;
	d->width_map = 0;
	d->decal_x = 0;
	d->decal_y = 0;
	d->value_z = 1;
	d->value = 10;
	d->angle = 0;
	d->color = WHITE;
	return (d);
}
