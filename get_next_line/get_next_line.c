/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:22:36 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/09 14:35:07 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_gnl	*ft_create_list(int fd)
{
	t_gnl *list;

	if (!(list = (t_gnl*)malloc(sizeof(*list))))
		return (NULL);
	list->fd = fd;
	list->tmp = ft_strnew(0);
	list->text = NULL;
	list->next = NULL;
	return (list);
}

static void		ft_add_last(t_gnl **main, t_gnl *elem)
{
	t_gnl *list;

	list = *main;
	while (list->next != NULL)
		list = list->next;
	list->next = elem;
}

static t_gnl	*ft_check_fd(t_gnl *main, int fd)
{
	t_gnl *tempo;
	t_gnl *r_list;

	tempo = NULL;
	r_list = main;
	while (r_list)
	{
		if (r_list->fd == fd)
			return (r_list);
		if (!(r_list->next))
		{
			tempo = ft_create_list(fd);
			ft_add_last(&r_list, tempo);
			return (tempo);
		}
		r_list = r_list->next;
	}
	return (NULL);
}

static int		ft_check(char *main, char **line)
{
	char *str;

	if (!main)
		return (0);
	str = ft_strchr(main, '\n');
	if (str != NULL)
	{
		*str = '\0';
		*line = ft_strdup(main);
		ft_strncpy(main, &str[1], ft_strlen(&str[1]) + 1);
		return (1);
	}
	else if (ft_strlen(main) > 0)
	{
		*line = ft_strdup(main);
		*main = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static t_gnl	*main = NULL;
	t_gnl			*tempo;
	int				ret;

	if (fd == -1 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (!(main))
		main = ft_create_list(fd);
	tempo = ft_check_fd(main, fd);
	while (!(ft_strchr(tempo->tmp, '\n')))
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			return (ft_check(tempo->text, line));
		buf[ret] = '\0';
		tempo->text = ft_strjoin(tempo->tmp, buf);
		free(tempo->tmp);
		tempo->tmp = tempo->text;
	}
	return (ft_check(tempo->text, line));
}
