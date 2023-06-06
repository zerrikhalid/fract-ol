/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   click_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:32:16 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 09:09:58 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../fractol.h"

int	destroy_win(t_list *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->new_win);
	mlx_destroy_image(mlx->mlx, mlx->img);
	mlx->mlx = NULL;
	exit(0);
}

int	click_events(int key, t_list *mlx)
{
	if (key == 53)
		destroy_win(mlx);
	if (key == 123)
		left_move(mlx);
	if (key == 124)
		right_move(mlx);
	if (key == 125)
		down_move(mlx);
	if (key == 126)
		up_move(mlx);
	if (key == 49)
		mlx->on = !mlx->on;
	if (key == 8)
	{
		mlx->color += 10;
		start_drawing(mlx);
	}
	return (0);
}
