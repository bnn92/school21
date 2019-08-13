/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:10:36 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/29 18:24:18 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	x;
	int	y;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x] != '\0')
	{
		if (haystack[x] == needle[0])
		{
			y = 1;
			while (haystack[x + y] == needle[y] && needle[y] != '\0')
				y++;
			if (needle[y] == '\0')
				return ((char *)&haystack[x]);
		}
		x++;
	}
	return (0);
}
