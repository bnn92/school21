/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:54:53 by dshirl            #+#    #+#             */
/*   Updated: 2019/04/19 16:29:29 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		ft_putchar(a[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		ind1;
	int		ind2;
	char	*ar;

	ind1 = 0;
	while (++ind1 < (argc - 1))
	{
		ind2 = 0;
		while (++ind2 <= (argc - ind1 - 1))
		{
			if (ft_strcmp(argv[ind1], argv[ind1 + ind2]) > 0)
			{
				ar = argv[ind1];
				argv[ind1] = argv[ind1 + ind2];
				argv[ind1 + ind2] = ar;
			}
		}
	}
	ind1 = 1;
	while (argv[ind1])
	{
		ft_putstr(argv[ind1]);
		ind1++;
	}
	return (0);
}
