/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:08:12 by dshirl            #+#    #+#             */
/*   Updated: 2019/07/21 15:38:55 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	unsigned int len_fw;
	unsigned int tmp;
	unsigned int len_sw;

	len_fw = 0;
	len_sw = 0;
	tmp = 0;

	if (argc == 3)
	{
		while (argv[1][len_fw] != '\0')
		{
			while (argv[1][len_fw] != argv[1][tmp] && tmp <= len_fw)
				tmp++;
			if (len_fw == tmp)
			{
				while (argv[1][len_fw] != argv[2][len_sw] && argv[2][len_sw] != '\0')
					len_sw++;
				if (argv[1][len_fw] == argv[2][len_sw])
					ft_putchar(argv[1][len_fw]);
			}
			len_sw = 0;
			len_fw++;
			tmp = 0;
		}
	}
	ft_putchar('\n');
	return (0);
}