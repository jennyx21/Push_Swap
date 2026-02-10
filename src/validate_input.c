/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/10 18:09:27 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	validate_input(int ac, char **av)
{
	int		i;
	int		j;
	long	num;
	char	**numbers;


	i = 0;
	j = 1;
	while(ac-- > 1)
	{
		numbers = ft_split(*av[j], find_witespace(*av[j]));
		while(numbers[i] != NULL)
		{
			if(check_if_valid_num(numbers[i]) == 0)
				return(write(1, "Error\n", 6));
			num = ft_atol(numbers[i]);
			if(num < INT_MIN || num > INT_MAX)
				return(write(1, "Error\n", 6));
			i++;
		}
	j++;
	}	
}
int check_if_valid_num(char *str)
{
	int	i;
	
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return(0);
	while (str[i])
	{
		if(ft_isdigit(str[i])== 0)
			return(0);
		i++;
	}
	return(1);
}
