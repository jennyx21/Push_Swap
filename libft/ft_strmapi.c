/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:16:06 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/29 22:28:09 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*restult;

	i = 0;
	restult = ft_strdup(s);
	if (!restult)
		return (NULL);
	while (s[i])
	{
		restult[i] = f(i, s[i]);
		i++;
	}
	return (restult);
}
