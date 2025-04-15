#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t x)
{
	size_t	i;

	i = 0;
	while(src[i] != '\0' && i < x)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < x)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}