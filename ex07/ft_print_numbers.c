/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:44:43 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/04 15:50:00 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char a;
	char b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		ft_putchar(a);
		a++;
	}
}
