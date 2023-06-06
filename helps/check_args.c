/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:49:32 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/06 08:54:04 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = -1;
	while (s[++i])
		;
	return (i);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	error(void)
{
	ft_putstr(">incorrect params:\n\n");
	ft_putstr(">Your inputs should be as the params bellow:\n");
	ft_putstr("---------------------------------\n");
	ft_putstr("./fractol <Mandelbrot>\n");
	ft_putstr("./fractol <Julia>\n");
	ft_putstr("---------------------------------\n");
	exit(1);
}

int	check_fractal(char **av, int ac)
{
	if (ac == 1 || ac > 2)
		error();
	if (!ft_strncmp(av[1], "mandelbrot", 10))
		return (0);
	if (!ft_strncmp(av[1], "julia", 5))
		return (1);
	if (!ft_strncmp(av[1], "burning", 5))
		return (2);
	error();
	return (3);
}
