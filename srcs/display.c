/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 15:23:37 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/10 20:20:36 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	display(t_3d *d)
{
	mlx_key_hook(d->win, my_key_funct, d);
	mlx_loop(d->mlx);
}
