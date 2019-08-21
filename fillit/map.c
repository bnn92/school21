/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:16:47 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/18 17:41:24 by dshirl           ###   ########.fr       */
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
		if (!(start_map[y] = (char *)malloc(sizeof(char) * size + 1)))
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
	start_map[y] = 0;
	return (start_map);
}

char	**renew_map(char **start_map, t_tetr *tetriki, int size)
{
	int		x;
	int		y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (start_map[y][x] == tetriki->letter)
				start_map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (start_map);
}

void	print_map(char **final_map)
{
	int		i;

	if (final_map == NULL)
	{
		ft_putendl("error");
		return ;
	}
	i = 0;
	while (final_map[i] != '\0')
	{
		ft_putendl(final_map[i]);
		i++;
	}
}

t_tetr	*free_tetriki(t_tetr *tetriki)
{
	t_tetr	*next;

	while (tetriki != NULL)
	{
		next = tetriki->next;
		ft_memdel((void **)(&tetriki));
		tetriki = next;
	}
	return (NULL);
}
