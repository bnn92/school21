#include "list.h"
#include <unistd.h>

void    ft_putstr(char const *s)
{
    unsigned int i;
    
    i = 0;
    if (s)
    {
        while (s[i] != '\0')
        {
            write(1, &s[i], 1);
            i++;
        }
    }
}
