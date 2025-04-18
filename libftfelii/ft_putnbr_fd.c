/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:17:02 by figomes           #+#    #+#             */
/*   Updated: 2025/04/07 16:17:11 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (x < 0)
	{
		ft_putchar_fd('-', fd);
		x = -x;
	}
	if (x / 10 > 0)
		ft_putnbr_fd(x / 10, fd);
	ft_putchar_fd('0' + (x % 10), fd);
}

/*int	main(void)
{
	ft_putnbr_fd(INT_MAX, 1);
}*/