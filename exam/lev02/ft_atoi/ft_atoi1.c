/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 14:23:10 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/20 15:02:13 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int res = 0;
	int min = 1;
	int i = 0;

	while(str[i] < 33 && str[i] != '\0')
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			min = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * min);
}

int		main(void)
{
	char str[] = "123";
	char str1[] = " 123";
	char str2[] = "-123";
	char str3[] = " +-123";
	char str4[] = "ab123";
	char str5[] = " 123 123";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
}
