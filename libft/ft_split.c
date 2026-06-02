/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicaguil <vicaguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:56:52 by vicaguil          #+#    #+#             */
/*   Updated: 2026/06/01 21:57:23 by vicaguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	free_all(char **arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	i;
	size_t	start;

	words = count_words(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		arr[i] = ft_substr(s, 0, start);
		if (!arr[i])
			return (free_all(arr, i), NULL);
		s += start;
		i++;
	}
	arr[words] = NULL;
	return (arr);
}
