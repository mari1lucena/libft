/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:34:10 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 17:14:35 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// aloca espaço colocando 0
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > ((size_t) - 1) / size)
		return (NULL);
	str = (void *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, (nmemb * size));
	return (str);
}

// int main()
// {
// 	size_t n = 5;
// 	int *arr = (int *)calloc(n, sizeof(int));
// 	size_t	i = 0;

// 	while (i < n)
// 	{
// 		printf("arr[%zu]= %d\n", i, arr[i]);
// 		i++;
// 	}
// }