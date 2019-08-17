/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:30:01 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/17 17:11:30 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	error(char *str)
{
	ft_putendl(str);
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[550];
	t_tetr	*tetriki;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0 || (ret = read(fd, buf, BUFF_SIZE)) < 20 || !buf[0])
			return (0);
		if (valid(buf) != 1)
			return (error("error"));
		close (fd);
		tetriki = get_struct(buf);
		solution(tetriki);
	}
	else
		return (error("error"));
}
