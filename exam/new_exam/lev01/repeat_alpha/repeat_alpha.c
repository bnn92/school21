#include "unistd.h"
#include "stdio.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;
		int x;

		i = 0;
		while(argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				x = argv[1][i] - 65;
				while (x >= 0)
				{
					ft_putchar(argv[1][i]);
					x--;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				x = argv[1][i] - 97;
				while (x >= 0)
				{
					ft_putchar(argv[1][i]);
					x--;
				}
			}
			else
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	return (0);
}