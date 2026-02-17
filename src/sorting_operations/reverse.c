/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:50:40 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/17 12:00:12 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	first = *stack;
	last = *stack;
	if (!stack)
		return ;
	if (ft_stacksize(stack) < 2)
		return ;
	while (last != NULL)
		last = last->next;
	*last->next = *first;
	*first = *first->next;
	last->next = NULL;
}

void	rra(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	reverse_rotate(stack_a);
	ft_putendl_fd("rra\n", 1);
}

void	rrb(t_stack **stack_b)
{
	if (!stack_b)
		return ;
	reverse_rotate(stack_b);
	ft_putendl_fd("rrb\n", 1);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a && !stack_b)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr\n", 1);
}
