/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:22:36 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/08 19:17:28 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static gnl		*create_list(int fd)
{
	gnl *list;

	if (!(list = (gnl*)malloc(sizeof(*list))))
		return (NULL);
	list->fd = fd;
	list->tmp = ft_strnew(0);
	list->text = NULL;
	list->next = NULL;
	return (list);
}

static void		add_last(gnl **main, gnl *elem)
{
	gnl *list;

	list = *main;
	while (list->next != NULL)
		list = list->next;
	list->next = elem;
}

static gnl	*check_fd(gnl *main, int fd)
{
	gnl *tempo;
	gnl *r_list;

	tempo = NULL;
	r_list = main;
	while (r_list)
	{
		if (r_list->fd == fd)
			return (r_list);
		if (!(r_list->next))
		{
			tempo = create_list(fd);
			add_last(&r_list, tempo);
			return (tempo);
		}
		r_list = r_list->next;
	}
	return (NULL);
}

static int		check(char *main, char **line)
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
	char		buf[BUFF_SIZE + 1];
	static gnl	*main = NULL;
	gnl			*tempo;
	int			ret;

	if (fd == -1 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (!(main))
		main = create_list(fd);
	tempo = check_fd(main, fd);
	while (!(ft_strchr(tempo->tmp, '\n')))
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			return (check(tempo->text, line));
		buf[ret] = '\0';
		tempo->text = ft_strjoin(tempo->tmp, buf);
		free(tempo->tmp);
		tempo->tmp = tempo->text;
	}
	return (check(tempo->text, line));
}