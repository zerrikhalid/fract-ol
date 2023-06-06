/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 08:44:29 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/04 21:02:25 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	julia_set(t_list *mlx, double x1, double y1)
{
	double	x;
	double	y;
	double	tmp;
	int		i;

	x1 = scale_coors(x1, mlx->start_x, mlx->end_x);
	y1 = scale_coors(y1, mlx->start_y, mlx->end_y);
	i = 0;
	x = x1;
	y = y1;
	while (((x * x) + (y * y)) <= 4 && i < mlx->iterations)
	{
		tmp = (x * x) - (y * y) - mlx->julia_x;
		y = (2 * x * y) + mlx->julia_y;
		x = tmp;
		i++;
	}
	return (i);
}
