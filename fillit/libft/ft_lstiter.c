/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:05:13 by dshirl            #+#    #+#             */
/*   Updated: 2019/05/28 21:53:14 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *pointer;

	if (!(lst) || !(f))
		return ;
	pointer = lst;
	while (pointer)
	{
		f(pointer);
		pointer = pointer->next;
	}
}
