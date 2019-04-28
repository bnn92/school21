/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:10:36 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/28 19:32:23 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	while (needle[i] != '\0')
		i++;
	
}

int		main(void)
{
	char haystack[1024] = "0123456789";
	char needle[1024] = "345";

	printf("%s\n", ft_strstr(haystack, needle));
	printf("%s\n", strstr(haystack, needle));
}
