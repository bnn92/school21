#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 30

void ft_putchar_fd(int fd, char c)
{
    write(fd, &c, 1);
}

int main(void)
{
    int fd;
    int ret;
    char buf[BUFF_SIZE + 1];

    fd = open("./new.txt", O_RDWR | O_CREAT | O_APPEND , S_IRUSR | S_IWUSR);
    ret = read(fd, buf, BUFF_SIZE);
  //  while ((ret = read(fd, buf, BUFF_SIZE)))
   // {
        buf[ret] = '\0';
        printf("ret = %d\n", ret);
        printf("%s", buf);
   // }
}