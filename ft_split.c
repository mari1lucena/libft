/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:22:09 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/22 13:51:39 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// conta quantas palavras eu recebi no split
static unsigned int	ft_countwords(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

void	ft_free(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (**s)
	{
		free(s[i]);
		i++;
	}
	free(s);
}
// vai criar varias strings basicamente toda vez que achar 'c' em 's'

static char	**little_split(char const *s, char c, char **split)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[j] = ft_substr(s, start, i - start);
			if (!split[j++])
			{
				ft_free(split);
				return (NULL);
			}
		}
	}
	split[j] = NULL;
	return (split);
}

//divide uma string em varias substrings sempre que acha 'c'
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	split = (char **)malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (little_split(s, c, split));
}

// int	main(void)
// {
// 	char	str[] = "meu..nome.....e.mariana....";
// 	char	**arr;
// 	arr = ft_split(str, '.');
// 	while(*arr)
// 	{
// 		printf("%s\n", *arr);
// 		arr++;
// 	}
// 	return (0);
// }
//
//
//
// char	**ft_split(char const *s, char c)
// {
// 	char	**split;
// 	int		i;
// 	int		j;
// 	int		start;
// 	i = 0;
// 	j = 0;
// 	split = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
// 	if (!split)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		if (s[i])
// 		{
// 			start = i;
// 			while (s[i] && s[i] != c)
// 				i++;
// 			split[j++] = ft_substr(s, start, i - start);
// 		}
// 		if(!s[i])
// 			ft_free(split);
// 	}
// 	split[j] = NULL;
// 	return (split);
// }