/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:42:21 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 21:15:35 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	unsigned int	size;
	unsigned int	i;

	i = 0;
	if (n < 0)
		nbr = (unsigned int)(n * -1);
	else
		nbr = (unsigned int)n;
	size = (unsigned int)ft_size_nbr(nbr);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (0);
	if (n < 0 && (str[i] = '-'))
		size++;
	i = size - 1;
	while (nbr >= 10)
	{
		str[i--] = (char)(nbr % 10 + 48);
		nbr /= 10;
	}
	str[i] = (char)(nbr % 10 + 48);
	str[size] = '\0';
	return (str);
}
