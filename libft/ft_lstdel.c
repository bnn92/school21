/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:18:12 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 18:33:14 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*point;
	t_list	*list;

	point = *alst;
	while (point)
	{
		list = point;
		ft_lstdelone(&point, del);
		point = list->next;
	}
	*alst = NULL;
}
