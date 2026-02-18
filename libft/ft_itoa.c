/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:39:03 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/30 15:55:08 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitch_char(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;
	long	nr;

	nr = n;
	i = whitch_char(n);
	result = malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (nr < 0)
	{
		nr = -nr;
		result[0] = '-';
	}
	result[i] = '\0';
	if (nr == 0)
		return (result[0] = '0', result);
	while (nr > 0)
	{
		result[i - 1] = nr % 10 + '0';
		nr /= 10;
		--i;
	}
	return (result);
}
