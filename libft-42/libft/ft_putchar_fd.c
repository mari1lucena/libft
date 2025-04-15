/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:12:31 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/15 17:28:40 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// escrever 'c' no file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
