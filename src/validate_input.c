/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/01/17 15:21:51 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_input(int argc, char **argv)
{
	int	i;
	int j;
	size_t num;


	i = 0;
	j = 0;
	
	
	while(argc-- > 1 && i < argc)
	{
		while (argv[i] && (argv[i] != ' '))
		{
		num += ft_atoi(&argv[i]);
		}
		if(num < INT_MIN && num > INT_MAX)
		{
			
		}
	}	

}