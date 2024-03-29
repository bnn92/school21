/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:43:46 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/09 15:20:08 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!n)
		return (1);
	if (s1 && s2 && n)
	{
		while (n > 0)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
			n--;
		}
		return (1);
	}
	return (0);
}
