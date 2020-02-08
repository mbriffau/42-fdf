/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:31:12 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/10 20:20:31 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

float			ft_max(float a, float b)
{
	return (a < b ? b : a);
}

static void		pixel_put(t_3d *d, int x, int y)
{
	if (x < 0 || x >= d->width_window || y < 0 || y >= d->height_window)
		return ;
	mlx_pixel_put(d->mlx, d->win, x, y, d->color);
}

void			draw_line(t_3d *d, t_fxy *a, t_fxy *b)
{
	float	dx;
	float	dy;
	int		pixel_count;
	int		i;

	if ((b->x < 0 && a->x < 0) || (b->x >= d->width_window ||
		a->x >= d->width_window) || (b->y < 0 && a->y < 0) ||
		(b->y > d->height_window && a->y >= d->height_window))
		return ;
	dx = b->x - a->x;
	dy = b->y - a->y;
	pixel_count = ft_max(fabs(dx), fabs(dy));
	i = 0;
	while (i < pixel_count)
	{
		pixel_put(d, a->x + (dx / pixel_count) * i, a->y
			+ (dy / pixel_count) * i);
		i++;
	}
}
