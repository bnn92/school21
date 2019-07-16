#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		readlinewidth(int fd)//читается размер необходимый для буфера
{
	char	buff[2];
	size_t	nbread;

	(void)memset((void*) buff, 0, (size_t) 2);
	nbread = read(fd, (void *) buff, (size_t) 2);
	if (nbread == -1 || nbread == 0)
		return (-1);
	buff[1] = '\0';
	return(atoi(buff));
}

void	readandprintlines(int fd, size_t linewidth)
{
	char	*buff;
	size_t	nbread;

	buff = (char *)malloc((linewidth + 1) * sizeof(*buff));
	if (buff == NULL)
		return ;
	(void)memset((void *)buff, 0, linewidth + 1);
	while ((nbread = read(fd, (void *)buff, linewidth)) != 0) //читает размер в цикле для каждой строчки и распечатывает их
	{
		printf("%s", buff);
		(void)memset((void *)buff, 0, linewidth);
	}
	free(buff);
	return ;
}

int		main(void)
{
	int		fd;
	int		linewidth;

	fd = open("./file.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	linewidth = readlinewidth(fd);
	if (linewidth == -1 || linewidth == 0)
		return(-1);
	readandprintlines(fd, (size_t)linewidth);
	close(fd);
	return (0);
} //статические переменные