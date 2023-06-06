/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:09:06 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 09:08:28 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <math.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# define SIZE 500

typedef struct s_list
{
	void	*mlx;
	void	*new_win;
	double	start_x;
	double	start_y;
	double	julia_x;
	double	julia_y;
	double	end_x;
	double	end_y;
	double	move;
	double	zoom;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		iterations;
	int		color;
	int		id;
	int		on;
}t_list;

int		check_fractal(char **av, int ac);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	start_creating(int id, char **av);
void	start_drawing(t_list *mlx);
double	scale_coors(double coor, double start, double end);
int		mandelbrot_set(t_list *mlx, double x1, double y1);
int		julia_set(t_list *mlx, double x1, double y1);
int		burning_ship_set(t_list *mlx, double x1, double y1);
int		click_events(int key, t_list *data);
int		destroy_win(t_list *mlx);
void	right_move(t_list *mlx);
void	left_move(t_list *mlx);
void	down_move(t_list *mlx);
void	up_move(t_list *mlx);
int		julia_mouse_move(int x, int y, t_list *mlx);
int		zooms(int key, int x, int y, t_list *mlx);
void	zoom_in(double x1, double y1, t_list *mlx);
void	zoom_out(double x1, double y1, t_list *mlx);

#endif