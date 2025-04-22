/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:18:01 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/09 19:18:01 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*A função isalpha() em C verifica se um caractere
é uma letra do alfabeto, ou seja, se é uma letra maiúscula (A-Z)
ou minúscula (a-z). Ela é parte da biblioteca <ctype.h>*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int	main()
// {
// 	printf("%d", ft_isalpha('a'));
// }