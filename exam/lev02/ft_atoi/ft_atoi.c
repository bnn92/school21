/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:37:11 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/19 19:15:02 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int min;
	int i;
	int res;

	i = 0;
	res = 0;
	min = 1;
	while(str[i] < 33 && str[i] != '\0')
		i++;
	if(str[i] == '-')
		min = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= 48 && str[i] <= 57)
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
	return(res * min);
}

int		main(void)
{
	char str[] = "123nb";
	char str1[] = " 123nb";
	char str2[] = " -123nb";
	char str3[] = "nb123";

	printf("%i\n", ft_atoi(str));
	printf("%i\n", ft_atoi(str1));
	printf("%i\n", ft_atoi(str2));
	printf("%i\n", ft_atoi(str3));
}














