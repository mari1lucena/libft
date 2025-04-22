/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:21:50 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 15:23:52 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// apaga 'set' de 's1'
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*str;

	start = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (ft_strrchr(set, s1[len]))
		len--;
	str = ft_substr(s1, start, len - start + 1);
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim(" Hel lo! ", " "));
// 	printf("%s\n", ft_strtrim(" Hello! ", " "));
// 	printf("%s\n", ft_strtrim(" Hello!", " "));
// 	printf("%s\n", ft_strtrim("Hello! ", " "));
// 	printf("%s\n", ft_strtrim("Hello!", " "));
// 	printf("%s\n", ft_strtrim("", ""));
// 	printf("%s\n", ft_strtrim(" Hello! ", ""));
// 	printf("%s\n", ft_strtrim("", " "));
// }