/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:39:29 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/30 15:55:23 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrsrc;
	unsigned char	*ptrdest;
	size_t			i;

	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		if (ptrsrc < ptrdest)
		{
			n--;
			ptrdest[n] = ptrsrc[n];
		}
		else
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}
