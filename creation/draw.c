/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 08:34:47 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 09:11:58 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	get_color(t_list *mlx, int res)
{
	int	r;
	int	g;
	int	b;

	if (res >= mlx->iterations)
		return (0);
	r = res * (1 - cos(mlx->color)) + 1 ;
	g = 3 * res * (sin(mlx->color) + 2);
	b = 4 * res * (cos(mlx->color) + 1);
	return (r << 16 | g << 8 | b);
}

void	draw_pixel(t_list *mlx, int y, int x, int color)
{
	char	*dst;

	dst = mlx->addr + ((x * mlx->line_length) \
		+ (y * (mlx->bits_per_pixel / 8)));
	*(unsigned int *)dst = color;
}

void	start_drawing(t_list *mlx)
{
	double	x;
	double	y;
	int		res;

	x = -1;
	while (++x < SIZE)
	{
		y = -1;
		while (++y < SIZE)
		{
			if (mlx->id == 0)
				res = mandelbrot_set(mlx, x, y);
			else if (mlx->id == 1)
				res = julia_set(mlx, x, y);
			else
				res = burning_ship_set(mlx, x, y);
			draw_pixel(mlx, x, y, get_color(mlx, res));
		}
	}
	mlx_put_image_to_window(mlx->mlx, mlx->new_win, mlx->img, 0, 0);
}
