/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 19:38:36 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/19 20:20:46 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strdup(char *src)
{
	int i;
	char *str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while(src[i] != '\0')
	{	
		str[i] = src[i];
		i++;
	}
	if (str == NULL)
		return (NULL);
	ft_putstr(str);
	return (str);
}

int		main(void)
{
	char str[] = "abbcccdddd";

	ft_strdup(str);
}
