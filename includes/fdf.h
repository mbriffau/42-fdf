/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:49:05 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/22 00:42:44 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include "mlx.h"
# include "./keycode.h"
# include "./colors.h"

# include <fcntl.h>
# include <stdlib.h>
# include <math.h>

# define INFO __FILE__, (char *)__FUNCTION__, __LINE__

# define TITLE_WINDOW		"FDF"
# define HEIGHT_WINDOW		1300
# define WIDTH_WINDOW		2000

# define VALUE_VAR_X		30
# define VALUE_VAR_Y		20
# define VALUE_VAR_Z		3
# define VALUE_VAR			10

# define LOG_CLEAR			\033[2K
# define LOG_UP				\033[A
# define LOG_NOCOLOR		\033[0m
# define LOG_BOLD			\033[1m
# define LOG_UNDERLINE		\033[4m
# define LOG_BLINKING		\033[5m
# define LOG_BLACK			\033[1;30m
# define LOG_RED			\033[1;31m
# define LOG_GREEN			\033[1;32m
# define LOG_YELLOW			\033[1;33m
# define LOG_BLUE			\033[1;34m
# define LOG_VIOLET			\033[1;35m
# define LOG_CYAN			\033[1;36m
# define LOG_WHITE			\033[1;37m

typedef struct		s_3d
{
	void	*mlx;
	void	*win;
	int		y_map;
	int		x_map;

	char	**s;
	int		**map;
	int		fd;

	int		width_window;
	int		height_window;

	int		width_map;
	int		height_map;
	int		start_x;
	int		start_y;
	int		start_y2;

	int		value;
	int		value_z;
	int		decal_x;
	int		decal_y;
	int		color;
	int		angle;
	int		option_d;

	int		var_x;
	int		var_y;
	int		d_x;
	int		d_y;
}					t_3d;

typedef struct		s_fxy
{
	int		x;
	int		y;
	int		z;
}					t_fxy;

t_3d				*read_map(char *s, t_3d *d);
t_3d				*t_3d_malloc(t_3d *d);
void				display(t_3d *d);
void				draw_map(t_3d *d);
void				draw_line(t_3d *d, t_fxy *a, t_fxy *b);
int					my_key_funct(int keycode, t_3d *d);
int					color_choice(int color);
void				ft_error(char *file, char *func, int line, char *s);

#endif
