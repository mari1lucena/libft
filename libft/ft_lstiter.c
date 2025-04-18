/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:44:25 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/18 19:47:38 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lbft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!lst || !f)
		return ;
	while(lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
