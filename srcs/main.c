/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 23:17:51 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/11 19:21:52 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int	main(int ac, char **av)
{
	t_3d	*data_map;
	int		fd;
	char	tab[1];

	data_map = NULL;
	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd == -1 || -1 == read(fd, tab, 1))
		exit(0);
	close(fd);
	data_map = t_3d_malloc(&*data_map);
	data_map = read_map(av[1], &*data_map);
	data_map->x_map = 0;
	data_map->y_map = 0;
	data_map->mlx = mlx_init();
	data_map->win = mlx_new_window(data_map->mlx, data_map->width_window,
		data_map->height_window, TITLE_WINDOW);
	draw_map(*&data_map);
	display(&*data_map);
	return (0);
}
