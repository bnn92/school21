/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 13:14:15 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 21:09:02 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if ((size + 1) == 0)
		return (0);
	str = malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (0);
	ft_memset(str, '\0', (size + 1));
	return (str);
}
