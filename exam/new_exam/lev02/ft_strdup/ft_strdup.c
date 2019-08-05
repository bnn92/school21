/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:52:21 by dshirl            #+#    #+#             */
/*   Updated: 2019/07/21 15:06:15 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	size_t	i;
	char	*new;

	i = 0;
	while (src[i] != '\0')
		i++;
	new = (char *)malloc((sizeof(char)) * (i + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	main(void)
{
	char *src = NULL;

	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
}
