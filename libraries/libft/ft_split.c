/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:21:47 by twang             #+#    #+#             */
/*   Updated: 2023/03/08 20:36:42 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free(void **s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[i])
	{
		free(s[i]);
		s[i] = NULL;
		i++;
	}
	free(s);
	s = NULL;
	return (NULL);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			nb_word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nb_word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = ft_calloc(word_count(s, c) + 1, sizeof(char **));
	if (!split)
		return (NULL);
	while (s[i] && k < word_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		split[k] = ft_substr(s, j, (i - j));
		if (!split[k++])
			return (ft_free((void **)split, k));
	}
	return (split);
}
