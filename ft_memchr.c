/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:48:26 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 15:19:23 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// procura nos primeiros 'n' bytes de 's' a primeira ocorrencia de 'c'
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		d;
	size_t				i;

	i = 0;
	str = (const unsigned char *)s;
	d = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == d)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	x[115] = "Hello, World!";

// 	printf("resultado eperado: %s\n", (char *)memchr(x, 'o', 9));
// 	printf("resultado obtido: %s\n", (char *)ft_memchr(x, 'o', 9));
// }