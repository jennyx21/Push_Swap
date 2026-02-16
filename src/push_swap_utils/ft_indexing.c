/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:51:31 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/16 17:39:11 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_indexing(t_stack **stack)
{
	t_stack	*runner;
	t_stack	*temp;
	int		i;

	temp = *stack;
	while (temp != NULL)
	{
		runner = *stack;
		i = 0;
		while (runner != NULL)
		{
			if (runner->data < temp->data)
				i++;
			runner = runner->next;
		}
		temp->index = i;
		temp = temp->next;
	}
}

int	find_max_index(t_stack **stack)
{
	int		max;
	t_stack	*temp;

	temp = *stack;
	max = temp->index;
	while (temp != NULL)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}

int	find_mid_index(t_stack **stack)
{
	int	mid;
	int	max;

	max = find_max_index(&stack);
	mid = max / 2;
	return (mid);
}
