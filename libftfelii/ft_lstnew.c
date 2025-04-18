/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: figomes <figomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:21:16 by figomes           #+#    #+#             */
/*   Updated: 2025/04/07 16:21:18 by figomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

/*int main(void)
{
    char *str = "Hello, world!";
    t_list *node = ft_lstnew(str);
    if (node == NULL)
    {
        printf("Error: Failed to create new node\n");
        return (1);
    }
    printf("Content of node: %s\n", (char *)node->content);
    free(node);
    return (0);
}
*/