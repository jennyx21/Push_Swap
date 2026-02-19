/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 12:22:27 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_find_pos(t_stack *stack, int value)
{
	int	i;

	i = 0;
	while (stack)
	{
		if ((stack->index == value))
			return (i);
		i++;
		stack = stack->next;
	}
	return (0);
}
