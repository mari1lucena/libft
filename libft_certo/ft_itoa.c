/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:34:17 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 15:26:18 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calcula quantos caracteres serão necessários para representar o número;
static int	ft_length(long n)
{
	long	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		n++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

// Converte um inteiro 'n' em uma string
char	*ft_itoa(int n)
{
	long	len;
	long	nbr;
	char	*str;

	nbr = n;
	len = ft_length(nbr);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (len >= 0 && nbr > 0)
	{
		len--;
		str[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (str);
}

// int main()
// {
// 	int i = -2;
// 	int x = 0;
// 	int y = -0;
// 	int z = 2;
// 	int j = '\0';

// 	printf("%s\n", ft_itoa(i));
// 	printf("%s\n", ft_itoa(x));
// 	printf("%s\n", ft_itoa(y));
// 	printf("%s\n", ft_itoa(z));
// 	printf("%s\n", ft_itoa(j));
// }