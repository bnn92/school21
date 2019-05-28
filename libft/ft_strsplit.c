/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:45:54 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 21:18:49 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_p(char const *s, char c)
{
	unsigned int	piece;
	unsigned int	i;

	i = 0;
	piece = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			piece++;
		i++;
	}
	if (s[0] != '\0')
		piece++;
	return (piece);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**r;
	unsigned int	i;
	unsigned int	x;
	unsigned int	y;

	i = 0;
	y = 0;
	if ((!s || !c) || (!(r = (char **)malloc(sizeof(r) * (ft_p(s, c) + 1)))))
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		x = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > x)
		{
			if (!(r[y++] = ft_strndup(&s[x], (i - x))))
				ft_memclean(r);
		}
	}
	r[y] = NULL;
	return (r);
}
