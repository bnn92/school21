/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:37:30 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/19 17:41:06 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		a;
	int		*str;

	a = 0;
	if (min >= max)
		return (0);
	i = max - min;
	str = (int *)malloc(sizeof(*str) * i);
	while (a < i)
	{
		str[a] = min;
		a++;
		min++;
	}
	return (str);
}
