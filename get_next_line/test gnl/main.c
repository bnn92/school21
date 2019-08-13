/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:25:11 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/09 14:11:31 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(void)
{
    int		fd;
	int		fd1;
	int		fd2;
	int		i;
    char	*line;

	i = 3;
    fd = open("./new.txt", O_RDWR);
	fd1 = open("./new1.txt", O_RDONLY);
	fd2 = open("./new2.txt", O_RDONLY);

	while ((get_next_line(fd, &line)) == 1 && i >= 0)
	{
        ft_putstr(line);
		ft_putchar('\n');
		i--;
	}
	i = 3;
	ft_putchar('\n');
	/*while ((get_next_line(fd1, &line)) == 1 && i > 0)
	{
        ft_putstr(line);
		ft_putchar('\n');
		i--;
	}*/
	i = 3;
	ft_putchar('\n');
	/* while ((get_next_line(fd2, &line)) == 1 && i > 0)
	{
        ft_putstr(line);
		ft_putchar('\n');
		i--;
	}*/
	ft_putchar('\n');
	while ((get_next_line(fd, &line)) == 1)
	{
        ft_putstr(line);
		ft_putchar('\n');
	}
	close(fd);
	close(fd1);
	close(fd2);
}
