/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:28:24 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/04 19:39:28 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	right_move(t_list *mlx)
{
	mlx->start_x += mlx->move;
	mlx->end_x += mlx->move;
	start_drawing(mlx);
}

void	left_move(t_list *mlx)
{
	mlx->start_x -= mlx->move;
	mlx->end_x -= mlx->move;
	start_drawing(mlx);
}

void	down_move(t_list *mlx)
{
	mlx->start_y += mlx->move;
	mlx->end_y += mlx->move;
	start_drawing(mlx);
}

void	up_move(t_list *mlx)
{
	mlx->start_y -= mlx->move;
	mlx->end_y -= mlx->move;
	start_drawing(mlx);
}
