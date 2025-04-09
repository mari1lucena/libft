#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_char;

	last_char = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last_char = (char*)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last_char);
}