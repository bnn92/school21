#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i;

		i = 0;
		while(argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
			{
				ft_putchar(argv[3][0]);
				i++;
			}
			else
			{
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
	return(0);
}