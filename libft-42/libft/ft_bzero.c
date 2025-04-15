/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:20:00 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/15 17:01:27 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// adiciona '\0' a os 'n' primeiros bytes
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return ;
}

// Por que ela não retorna nada?
// A função modifica diretamente a memória que o ponteiro aponta (por referência)
// Como a modificação já acontece fora da função,
// não é necessário retornar nada.

// unsigned int = armazena apenas valores positivos, Tamanho típico: 32 bits
//(0 até 4.294.967.295)
// size_t = é o tipo padrão para representar tamanhos de objetos em bytes,
//é definido pela implementação (sistema/arquitetura)
//É o tipo retornado por sizeof

// int	main(void)
// {
// 	char	x[10] = "oii\n";

// 	ft_bzero(x, 3);
// 	printf("%s", x);
// }
