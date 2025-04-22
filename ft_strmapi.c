/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:30:25 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 14:48:48 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char shift_char(unsigned int index, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return ('a' + (c - 'a' + index) % 26);
// 	if (c >= 'A' && c <= 'Z')
// 		return ('A' + (c - 'A' + index) % 26);
// 	return (c);
// }

// int main(void)
// {
// 	const char *original = "abc";
// 	char *result = ft_strmapi(original, shift_char);

// 	if (result)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Modificado: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Erro ao alocar memória.\n");
// 	}
// 	return (0);
// }