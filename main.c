/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:25:11 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/07 16:18:21 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(void)
{
    int		fd;
    char	*line;

    fd = open("./new.txt", O_RDWR);
	while ((get_next_line(fd, &line)) == 1)
	{
        ft_putstr(line);
		ft_putchar('\n');
	}
	close(fd);
}
