/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:57:02 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 09:00:35 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	burning_ship_set(t_list *mlx, double x1, double y1)
{
	double	x;
	double	y;
	double	tmp;
	int		i;

	x1 = scale_coors(x1, mlx->start_x, mlx->end_x);
	y1 = scale_coors(y1, mlx->start_y, mlx->end_y);
	i = 0;
	x = 0;
	y = 0;
	while (((x * x) + (y * y)) <= 4 && i <= mlx->iterations)
	{
		tmp = fabs((x * x) - (y * y) + x1);
		y = fabs((2 * x * y) + y1);
		x = tmp;
		i++;
	}
	return (i);
}
