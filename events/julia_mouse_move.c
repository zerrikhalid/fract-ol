/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_mouse_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:10:04 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 09:10:13 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	julia_mouse_move(int x, int y, t_list *mlx)
{
	if (mlx->id != 1 || x < 0 || x > SIZE || y < 0 || y > SIZE || !mlx->on)
		return (1);
	mlx->julia_x = scale_coors(x, mlx->start_x, mlx->end_x);
	mlx->julia_y = scale_coors(y, mlx->start_y, mlx->end_y);
	start_drawing(mlx);
	return (0);
}
