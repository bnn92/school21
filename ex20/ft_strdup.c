/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:37:53 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/19 16:49:27 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (src[i] != '\0')
		i++;
	str = (char *)malloc(i + 1);
	while (len <= i)
	{
		str[len] = src[len];
		len++;
	}
	if (str == 0)
		return (0);
	return (str);
}
