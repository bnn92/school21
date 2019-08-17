/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:09:46 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/17 20:49:25 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**insert_tetr(char **start_map, t_tetr *tetriki, int size)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (tetriki->y[i] == y && tetriki->x[i] == x)
			{
				start_map[y][x] = tetriki->letter;
				i++;
			}
			x++;
		}
		y++;
	}
	return (start_map);
}

static int	check_tetr(char **start_map, t_tetr *tetriki, int size)
{
	int		x;
	int		y;
	int		i;

	i = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (tetriki->x[i] < size && tetriki->y[i] < size &&
				start_map[tetriki->y[i]][tetriki->x[i]] == '.')
			{
				i++;
				if (i == 4)
					return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

static void	change_tetriki(t_tetr **tetriki, int x, int y)
{
	int		min_x;
	int		min_y;
	int		i;

	i = 0;
	min_x = 10;
	min_y = 10;
	while (i < 4)
	{
		if ((*tetriki)->x[i] < min_x)
			min_x = (*tetriki)->x[i];
		if ((*tetriki)->y[i] < min_y)
			min_y = (*tetriki)->y[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		(*tetriki)->x[i] = (*tetriki)->x[i] - min_x + x;
		(*tetriki)->y[i] = (*tetriki)->y[i] - min_y + y;
		i--;
	}
}

char		**try_sol(char **start_map, t_tetr *tetriki, int size)
{
	char	**final_map;
	int		x;
	int		y;

	if (tetriki->next == NULL)
		return(start_map);
	final_map = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			change_tetriki(&tetriki, x,y);
			if (check_tetr(start_map, tetriki, size))
				final_map = try_sol(insert_tetr(start_map, tetriki, size),
							tetriki->next, size);
			if (final_map)
				return (final_map);
			
		}
	}
}

void		solution(t_tetr *tetriki)
{
	int		size;
	char	**start_map;
	char	**final_map;

	size = 2;
	final_map = NULL;
	start_map = NULL;
	start_map = new_map(start_map, size);
	while (!(final_map = try_sol(start_map, tetriki, size)))
	{
		size++;
		ft_mamdel((void **)start_map);
		start_map = new_map(start_map, size);
	}
	print(final_map);
}
