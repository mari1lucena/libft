/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:21:39 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/18 20:35:50 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*x;
	t_list	*m;

	x = lst;
	if (!lst)
		return (NULL);
	while (x)
	{
		m = x;
		x = x->next;
		del(m->content);
		free(m);
	}
	*lst = NULL;
}
