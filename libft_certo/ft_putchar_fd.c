/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:12:31 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 14:11:54 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// escrever 'c' no file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main()
// {
// 	int	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putchar_fd('M', fd);
// 	close(fd);
// }