/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:18:05 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 14:49:19 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// // Função de exemplo: coloca tudo em maiúsculo
// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i; // Não vamos usar o índice aqui
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main(void)
// {
// 	char str[] = "hello world!";

// 	printf("Antes : %s\n", str);
// 	ft_striteri(str, to_upper);
// 	printf("Depois: %s\n", str);

// 	return 0;
// }