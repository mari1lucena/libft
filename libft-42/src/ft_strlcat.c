#include "libft.h"

char	*ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t destlen;
	size_t srclen;

	srclen = 0;
	destlen = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (dest[destlen] != '\0' && destlen < size)
		destlen++;
	i = 0;
	if (destlen < size)
	{
		while ((destlen + 1) < (size - 1) && src[i])
		{
			dest[i + destlen] = src[i];
			i++;
		}
		dest[i + destlen] = '\0';
	}
	return (destlen + srclen);
}
