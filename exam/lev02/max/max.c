/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 15:07:03 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/20 15:55:44 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int x = tab[i];

	while(i <= (len-1))
	{
		if(tab[i] < tab[i + 1] && x < tab[i + 1])
			x = tab[i + 1];
		i++;
	}
	if(i == len)
		return (x);
	return(0);
}

int		main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr1[] = {1, 0, 5, 7, 8, 9, 23, 4, 5, 7};
	int arr2[] = {};

	printf("%d\n", max(arr1, 8));
	printf("%d\n", max(arr, 9));
	printf("%d\n", max(arr2, 0));
}
