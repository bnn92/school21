/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:25:11 by dshirl            #+#    #+#             */
/*   Updated: 2019/07/21 19:58:11 by dshirl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include "sys/types.h"
#include "sys/uio.h"
#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"
# define BUFF_SIZE 10

int main(void)
{
    int fd;
    int ret;
    char buf[BUFF_SIZE + 1];

    fd = open("./new.txt", O_RDWR | O_CREAT | O_APPEND , S_IRUSR | S_IWUSR);
  //  ret = read(fd, buf, BUFF_SIZE);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
        buf[ret] = '\0';
      //  printf("ret = %d\n", ret);
        printf("%s", buf);
	}
}
