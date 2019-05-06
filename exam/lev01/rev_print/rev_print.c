/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 19:18:39 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/18 19:59:10 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		while(av[1][i] != '\0')
			i++;
		i = i-1;
		while(i >= 0)
		{
			write (1, &av[1][i], 1);
			i--;
		}
		write(1, "\n", 1);
		return (0);
	}
}