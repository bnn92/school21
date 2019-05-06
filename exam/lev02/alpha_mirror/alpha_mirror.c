/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:44:06 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/19 17:07:58 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int x;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if((av[1][i] >= 65 && av[1][i] <=90) || (av[1][i] >= 97 && av[1][i] <= 122))
			{
				if(av[1][i] >= 65 && av[1][i] <= 77)
				{
					x = 90 - (av[1][i] - 65);
				}
				else if(av[1][i] >= 78 && av[1][i] <= 90)
				{
					x = 65 + (90 - av[1][i]);
				}
				else if(av[1][i]	>= 97 && av[1][i] <= 109)
				{
					x = 122 - (av[1][i] - 97);
				}
				else if (av[1][i] >= 110 && av[1][i] <= 122)
				{
					x = 97 + (122 - av[1][i]);
				}
				write(1, &x, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

					