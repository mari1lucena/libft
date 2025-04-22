/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:06:06 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 14:01:06 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copia 'n' bytes de 'src' para 'dest' mas analisa overlap!
// nao corrompe o conteudo
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[5] = "abcde";
// 	char	dest[10];
// 	printf("%s\n", (char *)ft_memmove(dest, src, 2));
// 	printf("%s\n", (char *)memmove(dest, src, 2));
// }
// analisa overlap
// ela lida corretamente com sobreposição de memória. Ou seja, se as regiões
// de origem e destino se sobrepõem, a função memmove() garante que os dados
// sejam copiados corretamente, sem corromper os dados da origem.
// void test_memmove(char *src, char *expected_result, size_t n)