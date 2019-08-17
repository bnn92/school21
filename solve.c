#include "fillit.h"

//solve.c
void	xy_tetri(t_tetr **tetri, int x, int y)
{
	int	pos_x;
	int pos_y;
	int i;

	i = 0;
	pos_x = 100;
	pos_y = 100;
	while (i < 4)
	{
		if ((*tetri)->x[i] < pos_x)
			pos_x = (*tetri)->x[i];
		if ((*tetri)->y[i] < pos_y)
			pos_y = (*tetri)->y[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		(*tetri)->x[i] = (*tetri)->x[i] - pos_x + x;
		(*tetri)->y[i] = (*tetri)->y[i] - pos_y + y;
		i--;
	}
}

char	**algo(char **tetri_map, t_tetr *tetri, int size)
{
	int		x;
	int		y;
	char	**map;

	if (tetri->next == NULL)
		return (tetri_map);
	map = NULL;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			xy_tetri(&tetri, x, y);
			if (check_tetri(tetri_map, tetri, size))
				map = algo(insert_tetri(tetri_map, tetri, size),
						tetri->next, size);
			if (map)
				return (map);
			tetri_map = remove_tetri(tetri_map, tetri, size);
			x++;
		}
		y++;
	}
	return (NULL);
}

//map.c
char	**tetri_map_new(char **map, int size)
{
	int x;
	int y;

	y = 0;
	if (!(map = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (y < size)
	{
		if (!(map[y] = (char *)malloc(sizeof(char) * size + 1)))
			return (NULL);
		x = 0;
		while (x < size)
		{
			map[y][x] = '.';
			x++;
		}
		map[y][x] = '\0';
		y++;
	}
	map[y] = 0;
	return (map);
}

void	print_map(char **map)
{
	int i;

	if (map == NULL)
	{
		ft_putendl("error");
		return ;
	}
	i = 0;
	while (map[i] != 0)
	{
		ft_putendl(map[i]);
		i++;
	}
}

 char	**remove_tetri(char **map, t_tetr *tetri, int size)
{
	int x;
	int y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (map[y][x] == tetri->letter)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (map);
}

char	**insert_tetri(char **map, t_tetr *tetri, int size)
{
	int x;
	int y;
	int i;

	i = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (tetri->y[i] == y && tetri->x[i] == x)
			{
				map[y][x] = tetri->letter;
				i++;
			}
			x++;
		}
		y++;
	}
	return (map);
}
//check.c
int		check_tetri(char **map, t_tetr *tetri, int size)
{
	int i;
	int x;
	int y;

	i = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (tetri->y[i] < size && tetri->x[i] < size &&
				map[tetri->y[i]][tetri->x[i]] == '.')
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

void	solve(t_tetr *tetri)
{
	char	**result;
	char	**tetri_map;
	int		size;

	size = 2;
	tetri_map = NULL;
	tetri_map = tetri_map_new(tetri_map, size);
	result = NULL;
	while (!(result = algo(tetri_map, tetri, size)))
	{
		size++;
		ft_memdel((void **)tetri_map);
		tetri_map = tetri_map_new(tetri_map, size);
	}
	print_map(result);
}