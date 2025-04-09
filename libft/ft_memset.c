#include "libft.h"

void	*ft_memset(void *s, int c, size_t x)
{
	unsigned int i;
	unsigned char	*str;
	
	str = (char *) s;
	while(i < x)
	{
		str[i] =  (unsigned char) c;
		i++;
	}
	return((void *)str);
}

int	main(void)
{
	char str[] = "Welcome to Tutorialspoint";
	printf("%s", ft_memset(str,'#', 7));
}
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)b;
	while (len-- > 0)
		*(ptr++) = (unsigned char)c;
	return (b);
}

