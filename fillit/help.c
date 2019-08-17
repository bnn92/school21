int			main(int argc, char **argv)
{
	char	*stock;
	int		fd;
	t_tetri	*tetri;

	if (argc != 2)
	{
		ft_putendl("usage [map]");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	stock = stock_str(fd);
	if (!check_str(stock))
	{
		ft_putendl("error");
		return (0);
	}
	close(fd);
	tetri = stock_tetri(stock);
	solve(tetri);
	free(tetri);
	free(stock);
	return (0);
}

char	**algo(char **tetri_map, t_tetri *tetri, int size)
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

char	**remove_tetri(char **map, t_tetri *tetri, int size)
{
	int x;
	int y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (map[y][x] == tetri->c)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (map);
}

