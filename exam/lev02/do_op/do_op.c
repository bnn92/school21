/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 17:12:22 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/19 18:26:23 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int num1;
	int num2;
	int i;

	i = 0;
	if (ac == 4)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		if(av[2][i] == '+')
			printf("%d", (num1 + num2));
		if(av[2][i] == '-')
            printf("%d", (num1 - num2));
		if(av[2][i] == '*')
            printf("%d", (num1 * num2));
		if(av[2][i] == '/')
            printf("%d", (num1 / num2));
		if(av[2][i] == '%')
            printf("%d", (num1 % num2));
	}
	printf("\n");
}


