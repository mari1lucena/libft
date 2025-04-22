/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:34:02 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 21:36:23 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// não lida com sobreposição de áreas de memória
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// O comportamento de memcpy com NULL é indefinido, mesmo se n == 0
// apenas fazer a cópia, assumindo que os ponteiros são válidos.
// int	main(void)
// {
// 	char	x[] = "Hello, World!";
// 	char	j[10];
// 	printf("resultado esperado: %s\n", (char *)memcpy(j, x, 5));
// 	printf("resultado obtido: %s\n", (char *)ft_memcpy(j, x, 5));
// }
