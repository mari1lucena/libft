/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:34:14 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/15 18:17:55 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupli;
	size_t	i;

	i = ft_strlen(s);
	dupli = (char *)malloc(i + 1 * sizeof(char));
	if (!dupli)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dupli[i] = s[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}
