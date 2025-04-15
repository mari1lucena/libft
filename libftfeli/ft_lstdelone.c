/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-14 14:48:21 by figomes           #+#    #+#             */
/*   Updated: 2025-04-14 14:48:21 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(del)(lst->content);
	free(lst);
}

/*int	main(void)
{
	char *s1 = "Content1";

	t_list	*n1 = ft_lstnew(s1);
	t_list *list = n1;

	ft_lstdelone(n1, NULL);
	while(list)
	{
		printf("Content of node: %s\n", (char *)list->content);
	 	list = list->next;
	}
	return (0);
}*/