/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:16:47 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/17 18:30:48 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**map_new(char **start_map, int size)
{
	int		x;
	int		y;

	y = 0;
	if (!(start_map = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (y < size)
	{
		if (!(map[y] = (char *)malloc(sizeof(char) * size + 1)))
			return (NULL);
		x = 0;
		while (x < size)
		{
			start_map[y][x] = '.';
			x++;
		}
		start_map[y][x] = '\0';
		y++;
	}
	start_map[y] = '\0';
	return (start_map);
}
