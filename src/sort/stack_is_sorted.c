/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:11:42 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 16:05:46 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	stack_is_sorted(t_stack **a)
{
	t_stack	*temp;

	if (!(*a) || !*a)
		return (0);
	temp = *a;
	while (temp->next)
	{
		if (temp->index > temp->next->index)
			return (false);
		temp = temp->next;
	}
	return (true);
}
