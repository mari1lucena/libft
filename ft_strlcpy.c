/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:55:20 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 15:20:02 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strcpy que evita overflow retorna o comprimento de src
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	size_t	i = 3;
// 	char	dst[10] = "MARIANA";
// 	printf("Esperado: 7 (tamanho de \"LINDONA\")\n");
// 	printf("obtido: %zu\n", ft_strlcpy(dst, "LINDONA", i));
// 	printf("dst depois da cópia: \"%s\"\n", dst);
// }