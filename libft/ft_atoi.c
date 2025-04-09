#include "libft.h"

/*string para int*/

int    ft_atoi(const char *nb)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (nb[i] == 32 || (nb[i] >=9 && nb[i] <= 13))
        i++;
    if(nb[i] == "+" || nb[i] == "-")
    {
        if(nb[i] == "-")
            sign = sign * -1;
        i++;
    }
    while(nb[i] >= "0" && nb[i] <= "9")
    {
        result = result * 10;
        result = result + nb[i] - 48;
        i++;
    }
    return (result * sign);
}
