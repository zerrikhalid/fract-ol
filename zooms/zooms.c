/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zooms.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:22:36 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 08:50:39 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	zooms(int key, int x, int y, t_list *mlx)
{
	double	x1;
	double	y1;

	x1 = scale_coors(x, mlx->start_x, mlx->end_x);
	y1 = scale_coors(y, mlx->start_y, mlx->end_y);
	if (key == 4)
		zoom_in(x1, y1, mlx);
	if (key == 5)
		zoom_out(x1, y1, mlx);
	return (0);
}
