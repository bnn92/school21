/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:28:48 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/09 15:20:31 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000
# include "libft.h"

typedef struct		s_gnl
{
	char			*text;
	char			*tmp;
	struct s_gnl	*next;
	int				fd;
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
