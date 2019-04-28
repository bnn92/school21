/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 13:46:06 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/28 14:08:45 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*x;
	int			i;

	x = 0;
	i = 0;
	while (s[i] != '\0')
		i++;
	i = i + 1;
	while (i > 0)
	{
		if (*s == c)
			x = s;
		++s;
		--i;
	}
	if (x != 0)
		return ((char *)x);
	return (0);
}
