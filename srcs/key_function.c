/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:54:30 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/10 20:20:34 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int	key_color(int keycode, int color)
{
	keycode == KEY_PAD_0 ? color = WHITE : 0;
	keycode == KEY_PAD_1 ? color = RED : 0;
	keycode == KEY_PAD_2 ? color = BLUE : 0;
	keycode == KEY_PAD_3 ? color = GREEN : 0;
	keycode == KEY_PAD_4 ? color = POWDER_BLUE : 0;
	keycode == KEY_PAD_5 ? color = INDIGO : 0;
	keycode == KEY_PAD_6 ? color = CORAL : 0;
	keycode == KEY_PAD_7 ? color = IVORY : 0;
	keycode == KEY_PAD_8 ? color = LAVENDER : 0;
	keycode == KEY_PAD_9 ? color = AQUA_MARINE : 0;
	return (color);
}

int			my_key_funct(int keycode, t_3d *d)
{
	if (keycode == KEY_ESCAPE)
		exit(0);
	if (keycode == KEY_1)
		d->option_d = (d->option_d ? 0 : 1);
	(keycode == KEY_PAD_ADD) ? d->value += 1 : 0;
	(keycode == KEY_PAD_SUB) ? d->value -= 1 : 0;
	(keycode == KEY_E) ? d->value_z -= 1 : 0;
	(keycode == KEY_Q) ? d->value_z += 1 : 0;
	(keycode == KEY_S) ? d->decal_y += 5 : 0;
	(keycode == KEY_W) ? d->decal_y -= 5 : 0;
	(keycode == KEY_A) ? d->decal_x -= 5 : 0;
	(keycode == KEY_D) ? d->decal_x += 5 : 0;
	(keycode == KEY_P) ? d->angle = 1 : 0;
	(keycode == KEY_O) ? d->angle = 0 : 0;
	d->color = key_color(keycode, d->color);
	mlx_clear_window(d->mlx, d->win);
	draw_map(*&d);
	return (0);
}
