/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:09:54 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/12 15:28:40 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**word_mallocation(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	wordlen;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			wordlen = word_len(&s[i], c);
			result[j] = ft_substr(s, i, wordlen);
			if (!result[j])
			{
				while (j > 0)
					free(result[--j]);
				return (free(result), NULL);
			}
			i = i + wordlen - 1;
			j++;
		}
		++i;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**result;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = word_mallocation(s, c, result);
	return (result);
}
