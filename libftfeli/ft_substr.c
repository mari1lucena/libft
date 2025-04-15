/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:09:56 by figomes           #+#    #+#             */
/*   Updated: 2025/04/07 16:09:59 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*var;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[j + start] != '\0' && j < len)
		j++;
	var = (char *)malloc(sizeof(char) * (j + 1));
	if (!var)
		return (0);
	while (s[start] != 0 && i < j)
	{
		var[i] = s[start];
		i++;
		start++;
	}
	var[i] = '\0';
	return (var);
}
