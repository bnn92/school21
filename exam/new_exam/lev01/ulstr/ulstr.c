#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				ft_putchar((argv[1][i] + 32));
				i++;
			}
			else if(argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				ft_putchar((argv[1][i] - 32));
				i++;
			}
			else
			{
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return(0);
}