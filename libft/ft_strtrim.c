/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 16:04:54 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/19 17:19:04 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	x = ft_strlen(s);
	while (i < x && (s[x - 1] == ' ' || s[x - 1] == '\n' || s[x - 1] == '\t'))
		x--;
	if (i == x)
		return (ft_strnew(1));
	return (ft_strsub(s, i, (x - i)));
}
