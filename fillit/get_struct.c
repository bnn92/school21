/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 18:30:00 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/17 15:34:35 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	get_tetr(t_tetr **tmp, char *block)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (block[i] != '\0')
	{
		if (block[i] == '#')
		{
			(*tmp)->x[j] = i % 5;
			(*tmp)->y[j] = i / 5;
			j++;
		}
		i++;
	}
}

t_tetr		*get_struct(char *buf)
{
	char	letter;
	int		count_tetr;
	int		add_block;
	t_tetr	*tmp;
	t_tetr	*tetriki;

	add_block = 0;
	letter = 'A';
	count_tetr = (ft_strlen(buf) - 20) / 21 + 1;
	if (!(tetriki = (t_tetr *)malloc(sizeof(t_tetr))))
		return (NULL);
	tmp = tetriki;
	while (count_tetr > 0)
	{
		tmp->letter = letter;
		get_tetr(&tmp, ft_strsub(buf, 0 + add_block, 20));
		if (!(tmp->next = (t_tetr *)malloc(sizeof(t_tetr))))
			return (NULL);
		tmp = tmp->next;
		count_tetr--;
		letter++;
		add_block = add_block + 21;
	}
	tmp->next = NULL;
	return (tetriki);
}
