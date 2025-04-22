/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:35:34 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 17:04:10 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compara os primeiros 'n' caracteres de duas strings
//ela retorna se as strings sao iguais ou nao ate o limite da comparacao;
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
// int	main()
// {
// 	printf("%d\n", ft_strncmp("mariana", "marix", 5));
// 	printf("%d\n", strncmp("mariana", "mari", 5));
// }