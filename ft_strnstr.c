/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:34:25 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 15:23:31 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Localiza a substring 'needle' nos primeiros 'len' caracteres da string 
//'haystack'.
// Retorna um ponteiro para o início da primeira ocorrência de 'needle'.
// Retorna NULL se 'needle' não for encontrada dentro de 'len' caracteres.
// Se 'needle' for uma string vazia, retorna 'haystack'.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *haystack = "O projeto da 42 Lisboa é desafiador!";
// 	const char *needle1 = "42";
// 	const char *needle2 = "Lisboa";
// 	const char *needle3 = "desafio";
// 	const char *needle4 = "";
// 	const char *needle5 = "não existe";
// 	// Caso normal
// 	printf("1. Resultado: %s\n", ft_strnstr(haystack, needle1, 30));
// 	// needle no meio da string
// 	printf("2. Resultado: %s\n", ft_strnstr(haystack, needle2, 35));
// 	// needle cortado pelo len
// 	printf("3. Resultado: %s\n", ft_strnstr(haystack, needle3, 25));
// deve dar NULL
// 	// needle vazia
// 	printf("4. Resultado: %s\n", ft_strnstr(haystack, needle4, 10));
// deve retornar haystack
// 	// needle inexistente
// 	printf("5. Resultado: %s\n", ft_strnstr(haystack, needle5, 50));
// deve dar NULL
// 	// len menor que posição de needle
// 	printf("6. Resultado: %s\n", ft_strnstr(haystack, needle2, 10));
// deve dar NULL
// 	return (0);
// }