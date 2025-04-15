/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-14 14:47:40 by figomes           #+#    #+#             */
/*   Updated: 2025-04-14 14:47:40 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/*int	main(void)
{
	char *s1 = "Content1";
	char *s2 = "Content2";
	char *s3 = "Content3";

	t_list	*n1 = ft_lstnew(s1);
	t_list	*n2 = ft_lstnew(s2);
	t_list	*n3 = ft_lstnew(s3);

	n1->next = n2;
	n2->next = n3;

	t_list *list = n1;
	
	ft_lstclear(&list, NULL);

	while(list)
	{
		printf("Content of node: %s\n", (char *)list->content);
	 	list = list->next;
	}
	return (0);
}*/