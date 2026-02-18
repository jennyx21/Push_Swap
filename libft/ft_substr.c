/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:37:08 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/27 17:58:56 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = -1;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (result = ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (++i < len)
		result[i] = s[start + i];
	return (result);
}
