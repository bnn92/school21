/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memclean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 21:18:12 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 21:18:42 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memclean(char **str)
{
	int i;

	i = 0;
	free(str);
	while (str[i])
		free(str[i++]);
	str = NULL;
}
