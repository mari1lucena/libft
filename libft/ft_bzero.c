#include "libft.h"

void ft_bzero(char *str, int x)
{
    unsigned i;
    
    i = 0;
    while(i < x)
    {
        str[i] = '\0';
        i++;
    }
}
