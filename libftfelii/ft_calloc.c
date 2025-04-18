/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:47:23 by figomes           #+#    #+#             */
/*   Updated: 2025/04/07 15:47:25 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p1;

	p1 = (void *)malloc(nmemb * size);
	if (!p1)
		return (NULL);
	ft_bzero(p1, nmemb * size);
	return (p1);
}
