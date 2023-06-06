/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_out.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:22:32 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 08:51:12 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	zoom_out(double x1, double y1, t_list *mlx)
{
	mlx->iterations -= 10;
	mlx->start_x /= mlx->zoom;
	mlx->start_y /= mlx->zoom;
	mlx->end_x /= mlx->zoom;
	mlx->end_y /= mlx->zoom;
	mlx->start_x -= x1;
	mlx->start_y -= y1;
	mlx->end_x -= x1;
	mlx->end_y -= y1;
	mlx->move /= mlx->zoom;
	start_drawing(mlx);
}
