/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:48:07 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/21 18:08:39 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*lst2;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		lst2 = ft_lstnew(f(lst->content));
		if (!lst2)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, lst2);
		lst = lst->next;
	}
	return (new);
}

// void	*ft_toupperr(void *c)
// {
// 	int	i = 0;
// 	char *str;
// 	str = (char *)c;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] = str[i] - 32;
// 		i++;
// 	}
// 	return ((void *)str);
// }
// int main()
// {
// 	t_list t1;
// 	t_list t2;
// 	t_list t3;
// 	t_list	*hd;
// 	t1.next = &t2;
// 	t2.next = &t3;
// 	t3.next = NULL;
// 	t1.content = ft_strdup("oi");
// 	t2.content = ft_strdup("ob");
// 	t3.content = ft_strdup("oc");
// 	hd = ft_lstmap(&t1, &ft_toupperr, free);
// 	printf(" %s\n %s\n %s\n", (char *)hd->content, (char *)hd->next->content, \
// 	(char *)hd->next->next->content);
// }