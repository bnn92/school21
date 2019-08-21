/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:30:01 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/18 17:59:58 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	error(char *str)
{
	ft_putendl(str);
	return (1);
}

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[550];
	t_tetr	*tetriki;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0)
			return (error("error"));
		if ((ret = read(fd, buf, 550)) < 20 || !buf[0])
			return (error("error"));
		close(fd);
		if (valid(buf) != 1)
			return (error("error"));
		tetriki = get_struct(buf);
		solution(tetriki);
		free_tetriki(tetriki);
		return (0);
	}
	else
		return (error("usage: fillit input_file"));
}
