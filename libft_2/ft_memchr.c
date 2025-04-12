#include "libft.h"
//procura a primeira ocorrencia de 'c' em 's' nos primeiros 'n' bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;
	size_t	i;

	i = 0;
	str = (unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == a)
		{
			return ((void *)str + i);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	char	x[] = "olaasasdaa";
	printf("esperado: %s\n", (char *)memchr(x, 's', 7));
	printf("resultado: %s\n", (char *)ft_memchr(x, 's', 7));
}