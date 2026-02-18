/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:46:47 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/30 15:56:20 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen(s);
	while (str_len >= 0)
	{
		if ((unsigned char)s[str_len] == (unsigned char)c)
			return ((char *)&s[str_len]);
		str_len--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[str_len]);
	return (0);
}
