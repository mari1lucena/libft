/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:13:11 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 18:20:54 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// preenche os primeiros n bytes de s por c
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char str[35] = "abcdefghijklmnopqrstuvw";
// 	printf("%s\n", (char *)ft_memset(&str[3],'#', 2));
// 	printf("%s\n", str);
// 	printf("-> %lu\t\n", sizeof(unsigned long));
// 	printf("-> %lu\t\n", sizeof(int));
// 	printf("-> %lu\t\n", sizeof(long long));
// }