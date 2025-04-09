#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t x)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < x)
	{
		dest[i] =src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}