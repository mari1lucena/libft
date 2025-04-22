/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:39:37 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 14:46:17 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *t1 = ft_lstnew("primeiro");
// 	t_list *t2 = ft_lstnew("segundo");
// 	ft_lstadd_front(&t1, t2);
// 	printf(" %s\n", (char *)t2->content);
// 	printf(" %s\n", (char *)t2->next->content);
// 	free(t1->next);
// 	free(t1);
// 	return (0);
// }