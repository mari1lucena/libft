/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:11:46 by figomes           #+#    #+#             */
/*   Updated: 2025/04/07 16:11:48 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*var;

	start = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (ft_strrchr(set, s1[len]))
		len--;
	var = ft_substr(s1, start, len - start + 1);
	return (var);
}

/*int	main(void)
{
	char str[] = ",.;42.School.,;";
	printf("%s\n", ft_strtrim(str, ",.;"));
	return (0);
}*/