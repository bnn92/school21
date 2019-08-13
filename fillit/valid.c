/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:29:23 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/13 21:19:38 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_tetr(char *sq)
{
	int		i;
	int		tetr;

	tetr = 0;
	i = 0;
	while (sq[i] != '\0')
	{
		if (sq[i] == '#')
		{
			if ((i + 1) < 20 && sq[i + 1] == '#')
				tetr++;
			if ((i + 5) < 20 && sq[i + 5] == '#')
				tetr++;
			if ((i - 1) >= 0 && sq[i - 1] == '#')
				tetr++;
			if ((i - 5) >= 0 && sq[i - 5] == '#')
				tetr++;
		}
		i++;
	}
	if (tetr == 6 || tetr == 8)
		return (1);
	return (0);
}

static int	check_sq(char *sq)
{
	int		i;
	int		resh;
	int		n;

	n = 0;
	i = 0;
	resh = 0;
	if (sq[4] != '\n' || sq[9] != '\n' || sq[14] != '\n' || sq[19] != '\n')
		return (0);
	while (sq[i] != '\0')
	{
		if (sq[i] == '.' || sq[i] == '#' || sq[i] == '\n')
		{
			if (sq[i] == '#')
				resh++;
			if (sq[i] == '\n')
				n++;
		}
		else
			return (0);
		i++;
	}
	if (resh != 4 || n != 4)
		return (0);
	return (check_tetr(sq));
}

int			valid(char *buf)
{
	int		i;
	int		len;
	char	*square;

	i = 0;
	if ((len = ft_strlen(buf)) < 20)
		return (0);
	if (len > 20 && ((i = (len - 20) % 21) != 0))
		return (0);
	while (i < len)
	{
		if (buf[i + 20] != '\n' && (i + 20) != len)
			return (0);
		if (!(square = ft_strsub(buf, i, 20)))
			return (0);
		if (check_sq(square) != 1)
			return (0);
		free(square);
		i = i + 21;
	}
	return (1);
}
