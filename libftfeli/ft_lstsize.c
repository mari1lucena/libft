/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:20:51 by figomes           #+#    #+#             */
/*   Updated: 2025/04/07 16:20:54 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *s1 = "Content1";
	char *s2 = "Content2";
	char *s3 = "Content3";
	int	len = 0;

	t_list	*n1 = ft_lstnew(s1);
	t_list	*n2 = ft_lstnew(s2);
	t_list	*n3 = ft_lstnew(s3);

	n1->next = n2;
	n2->next = n3;

	t_list *list = n1;
	len = ft_lstsize(list);
	printf("%d\n", len);
	return (0);
}*/