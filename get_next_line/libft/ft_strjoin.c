/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:43:10 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/19 16:03:41 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	x;
	char			*str;

	x = 0;
	if (s1 && s2)
	{
		str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (str == 0)
			return (0);
		while (s1[x] != '\0')
		{
			str[x] = s1[x];
			x++;
		}
		ft_strcpy(&str[x], s2);
		return (str);
	}
	return (0);
}
