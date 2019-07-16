/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:43:23 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/06 17:42:30 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			i++;
		str = malloc(sizeof(char) * (i + 1));
		if (str == 0)
			return (0);
		i = 0;
		while (s[i] != '\0')
		{
			str[i] = f((char)s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
