/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:38:05 by dshirl            #+#    #+#             */
/*   Updated: 2019/08/17 20:49:31 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include "libft.h"

typedef struct		s_tetr
{
	char			letter;
	int				x[4];
    int				y[4];
    struct s_tetr	*next;
}					t_tetr;

int		main(int argc, char **argv);
int		valid(char *buf);
t_tetr	*get_struct(char *buf);
void	solution(t_tetr *tetriki);
char	**map_new(char **start_map, int size);
char	**try_sol(char **start_map, t_tetr *tetriki, int size);


#endif