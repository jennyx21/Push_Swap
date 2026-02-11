/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:53:03 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/11 10:38:08 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (nptr[i] == 9 || nptr[i] == 10 || nptr[i] == 11 || nptr[i] == 12
		|| nptr[i] == 13 || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit((unsigned char)nptr[i]))
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * sum);
}
