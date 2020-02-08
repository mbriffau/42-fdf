/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:58:48 by mbriffau          #+#    #+#             */
/*   Updated: 2017/08/22 00:10:38 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		color(int value_z, int index)
{
	if (value_z > index)
		return (RED);
	else
		return (WHITE);
}

int		color_choice(int color)
{
	if (color == WHITE)
		color = YELLOW;
	else if (color == YELLOW)
		color = GREEN;
	else if (color == GREEN)
		color = BLUE;
	else if (color == BLUE)
		color = RED;
	else if (color == RED)
		color = WHITE;
	return (color);
}
