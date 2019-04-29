/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 18:05:01 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/20 19:44:21 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	char str[8];
	int i = 0;
	int num;
	char y;

	num = octet;
	while(i < 8)
	{
		str[i] = num % 2;
		num = num / 2;
		i++;
	}
	while((i-1) >= 0)
	{
		y = str[i - 1] + 48;
		write(1, &y, 1);
		i--;
	}
}

int		main(void)
{
	char x = 55;
	print_bits(x);
}
