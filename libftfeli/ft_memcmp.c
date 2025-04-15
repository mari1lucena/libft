/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-14 14:48:56 by figomes           #+#    #+#             */
/*   Updated: 2025-04-14 14:48:56 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			result = (((unsigned char *)s1)[i] - (((unsigned char *)s2)[i]));
			return (result);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	unsigned char test[] = "BoasGabriel";
	printf("%d", ft_memcmp(test, "BoasGabriel", sizeof(test)));
}*/