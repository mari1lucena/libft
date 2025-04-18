/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:06:06 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/17 12:32:21 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copia 'n' bytes de 'src' para 'dest' mas analisa overlap!
//nao corrompe o conteudo
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

// 	if (d < s)
// 	{
// 		i = 0;
// 		while (i < n)
// 		{
// 			d[i] = s[i];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		i = n;
// 		while (i > 0)
// 		{
// 			i--;
// 			d[i] = s[i];
// 		}
// 	}
// 	return (dest);
// }


// int	main()
// {
// 	char src[5] = "abcde";
// 	char	dest[10];

// 	printf("%s\n", (char *)ft_memmove(dest, src, 2));
// 	printf("%s\n", (char *)memmove(dest, src, 2));
// }
//analisa overlap
// ela lida corretamente com sobreposição de memória. Ou seja, se as regiões
//de origem e destino se sobrepõem, a função memmove() garante que os dados 
//sejam copiados corretamente, sem corromper os dados da origem.

// void test_memmove(char *src, char *expected_result, size_t n)
// {
//     char dest[20]; // Buffer de destino
//     ft_memmove(dest, src, n);
    
//     printf("Resultado esperado: %s\n", expected_result);
//     printf("Resultado obtido:   %s\n", dest);
//     printf("\n");
// }

// // Função main para testar a implementação
// int main()
// {
//     // Teste 1: Não sobrepõe as áreas
//     char str1[20] = "abcdefg";
//     printf("Teste 1 - Sem sobreposição:\n");
//     test_memmove(str1, "abcabcdg", 4); // Esperado: "abcabcdg"

//     // Teste 2: Sobreposição (src antes de dest)
//     char str2[20] = "abcdefg";
//     printf("Teste 2 - Sobreposição (src antes de dest):\n");
//     test_memmove(str2, "abcabcdg", 4); // Esperado: "abcabcdg"

//     // Teste 3: Sobreposição (src depois de dest)
//     char str3[20] = "abcdefg";
//     printf("Teste 3 - Sobreposição (src depois de dest):\n");
//     test_memmove(str3 + 3, str3, 4); // Esperado: "defgdefg"

//     // Teste 4: Cópia simples sem sobreposição
//     char str4[20] = "abcdefghij";
//     printf("Teste 4 - Cópia simples:\n");
//     test_memmove(str4, "abcdefghij", 10); // Esperado: "abcdefghij"

//     return 0;
// }