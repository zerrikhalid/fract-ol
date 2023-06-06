/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 08:05:23 by kzerri            #+#    #+#             */
/*   Updated: 2023/06/02 08:07:24 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((ps1[i] == ps2[i]) && (ps1[i] || ps1[i]) && i < n - 1)
		i++;
	if ((ps1[i] - ps2[i]) == 0)
		return (0);
	else if ((ps1[i] - ps2[i]) > 0)
		return (1);
	return (-1);
}
