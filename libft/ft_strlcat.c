/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:33:54 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/28 19:32:26 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t x;
	size_t y;

	i = 0;
	x = 0;
	y = 0;
	while (dst[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	if (size <= i)
		x = x + size;
	else
		x = x + i;
	while (src[y] != '\0' && i + 1 < size)
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	dst[i] = '\0';
	return (x);
}
