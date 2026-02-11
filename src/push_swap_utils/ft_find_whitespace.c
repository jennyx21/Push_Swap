/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_whitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:58:03 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/11 20:07:34 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char find_witespace(char *str)
{
	int i; 
	char c;

	i = 0; 
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\v' || str[i] == '\t' || str[i] == '\r' 
			|| str[i] == '\n' || str[i] == '\f' )
			{
				c = str[i];
				return (c);
			}
		i++;
	}
 return (0);
}