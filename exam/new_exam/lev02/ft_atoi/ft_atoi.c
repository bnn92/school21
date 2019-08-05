/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:20:58 by dshirl            #+#    #+#             */
/*   Updated: 2019/07/21 14:50:33 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	long int i;
	long int res;
	long int min;

	i = 0;
	res = 0;
	min = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		min = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if ((res * 10 / 10) != res && min == 1)
			return (-1);
		if ((res * 10 / 10) != res && min == -1)
			return (0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * min);
}

int		main(void)
{
	char *str = "  \n\t -12345354657584937537272";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
