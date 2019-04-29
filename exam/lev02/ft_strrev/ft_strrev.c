/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 20:23:51 by dshirl            #+#    #+#             */
/*   Updated: 2019/03/19 21:03:39 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strrev(char *str)
{
	int x;
	int y;
	char i;
	int a;

	x = 0;
	y = 0;
	while(str[x] != '\0')
		x++;
	a = x / 2;
	x = x - 1;
	while (x != (a - 1))
	{
		i = str[y];
		str[y] = str[x];
		str[x] = i;
		x--;
		y++;
	}
	ft_putstr(str);
	return(str);

}

int		main(void)
{
	char str[] = "aaabbbb";

	ft_strrev(str);

}
