/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:49:31 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 21:50:15 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack)
		return ;
	last = *stack;
	first = *stack;
	if (ft_stacksize(stack) < 2)
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack **stack_b)
{
	if (!stack_b)
		return ;
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a && !stack_b)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}
