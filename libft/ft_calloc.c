/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:44:57 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/30 15:54:41 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*i;
	size_t	total;

	total = nmemb * size;
	i = malloc(total);
	if (!i)
		return (NULL);
	ft_bzero(i, total);
	return (i);
}
