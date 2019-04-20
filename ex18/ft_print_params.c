/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:59:06 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/06 19:12:42 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int a;

	i = 1;
	a = 0;
	while (argc > i)
	{
		while (argv[i][a] != '\0')
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i++;
		a = 0;
	}
}
