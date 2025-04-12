#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*d; //e mais seguro para nume > que 127 tipo binario
	const unsigned char	*s;

	if (!dest && !src) //(defensivo)nao e necessario mas evita segfault se forem nulos
		return (NULL);
	
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
