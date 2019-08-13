/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:30:01 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/13 19:04:39 by dshirl           ###   ########.fr       */
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

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0 || (ret = read(fd, buf, BUFF_SIZE)) < 20 || !buf[0])
			return (0);
		if (valid(buf) == 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		close (fd);
	}
	else
		return (error("error"));
}
