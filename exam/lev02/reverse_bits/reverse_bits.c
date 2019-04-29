/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 21:27:02 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/20 21:51:36 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int str[8];
	int i = 0;
	int num;
	int x = 128;

	num = octet;
	while(i < 8)
	{
		str[i] = num % 2;
		num = num / 2;
		i++;
	}
	i = 0;
	num = 0;
	while(i <= 8)
	{
		num = str[i] * x + num;
		x = x / 2;
		i++;
	}
	octet = num;
	write(1, &octet, 1);
	return (octet);
}

int		main(void)
{
	char x = '&';
	reverse_bits(x);

}
