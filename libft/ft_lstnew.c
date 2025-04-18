/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:56:42 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/18 19:08:38 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//criar um novo node p/ lista com o conteudo fornecido
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list)); //t_list nesse caso tem o tamanho p/ 2 vetores;
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

// int main()
// {
// 	char *str = strdup("hello, world!");
// 	//int strr[] = "hello world"; //nao precisa dar free pq ta na stack escopo lim
// 	t_list *node;
	
// 	node = NULL;
// 	if (node == NULL)
// 	{
// 		printf("erro retornou null\n");
// 		return (1);
// 	}
// 	if (node->content == NULL)
// 		printf("Erro: content esta NULL\n");
// 	else
// 		printf("Conteudo do node: %s\n", (char *)node->content);
// 	if(node->next != NULL)
// 		printf("Erro: next nao esta NULL\n");
// 	free(str);
// 	free(node);

// 	return (0);
// }
