#include "libft.h"

/*A função isalpha() em C verifica se um caractere
é uma letra do alfabeto, ou seja, se é uma letra maiúscula (A-Z)
ou minúscula (a-z). Ela é parte da biblioteca <ctype.h>*/

int ft_isalpha(char c)
{
    if(c >= "A" && c <= "Z") || (c >= "a" || c<= "Z"))
        return (1);
    else
        return (0);
}
