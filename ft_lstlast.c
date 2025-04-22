/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:11:22 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 14:45:12 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*x;

	if (!lst)
		return (NULL);
	x = lst;
	while (x -> next)
	{
		x = x -> next;
	}
	return (x);
}

// int main()
// {
// 	t_list t1;
// 	t_list t2;
// 	t_list t3;
// 	t_list t4;
// 	t_list t5;
//	
// 	t1.next = &t2;
// 	t2.next = &t3;
// 	t3.next = &t4;
// 	t4.next = &t5;
// 	t5.next = NULL;
// 	printf("enderco de t5: %p\n endereco de last: %p\n", &t5, ft_lstlast(&t5));
// }