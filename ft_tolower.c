/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:02:15 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/12 13:33:08 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//coloca em minuscula
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int main()
// {
// 	char	letra = 'm';
// 	char	resultado = ft_tolower(letra);

// 	printf("Original: %c\n", letra);
// 	printf("Convertido: %c\n", resultado);

// 	return 0;
// }