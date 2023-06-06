/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_mlx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 08:19:03 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 09:12:35 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	start_creating(int id, char **av)
{
	t_list	mlx;

	mlx.mlx = mlx_init();
	mlx.new_win = mlx_new_window(mlx.mlx, SIZE, SIZE, av[1]);
	mlx.img = mlx_new_image(mlx.mlx, SIZE, SIZE);
	mlx.addr = mlx_get_data_addr(mlx.img, &mlx.bits_per_pixel, \
		&mlx.line_length, &mlx.endian);
	mlx.start_x = -2;
	mlx.end_x = 2;
	mlx.start_y = -2;
	mlx.end_y = 2;
	mlx.iterations = 80;
	mlx.color = 0x002E86DB;
	mlx.id = id;
	mlx.move = 0.2;
	mlx.julia_x = 0.8;
	mlx.julia_y = 0.156;
	mlx.on = 1;
	mlx.zoom = 0.5;
	start_drawing(&mlx);
	mlx_hook(mlx.new_win, 02, 0, click_events, &mlx);
	mlx_hook(mlx.new_win, 17, 0, destroy_win, &mlx);
	mlx_hook(mlx.new_win, 6, 0, julia_mouse_move, &mlx);
	mlx_mouse_hook(mlx.new_win, zooms, &mlx);
	mlx_loop(mlx.mlx);
}
