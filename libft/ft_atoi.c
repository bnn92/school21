/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:20:37 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/01 16:35:08 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long int	min;
	long int	i;
	long int	res;

	i = 0;
	res = 0;
	min = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		min = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (res * 10 / 10 != res && min == 1)
			return (-1);
		if (res * 10 / 10 != res && min == -1)
			return (0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * min);
}
