/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:12:09 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/29 20:05:52 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *need, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (need[0] == '\0')
		return ((char *)hays);
	while (hays[x] != '\0' && x < len)
	{
		if (hays[x] == need[0])
		{
			y = 1;
			while (hays[x + y] == need[y] && need[y] != '\0' && x + y < len)
			{
				y++;
			}
			if (need[y] == '\0')
				return ((char *)&hays[x]);
		}
		x++;
	}
	return (0);
}
