/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 15:58:36 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/18 16:21:49 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	char a;
 
	i = 0;
	a = ' ';
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (av[1][i] == a)
			i++;
		while(av[1][i] != a)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
