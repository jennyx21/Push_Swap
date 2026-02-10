/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/09 15:11:19 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	validate_input(int ac, char **av)
{
	int	i;
	int j;
	int num;
	char **numbers;


	i = 0;
	while(ac-- > 1)
	{
		numbers = ft_split(*av[j], find_witespace(*av[j]));
		while(numbers[i])
		{	
			if(ft_isdigit(num) == 0)
			num = ft_atoi(*numbers[i]);
			
			retrun("Error\n");
			i++;
		}
	}	
}
