/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:49:31 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/16 16:13:17 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	first = *stack;
	last = *stack;
	if (!stack)
		return ;
	if (ft_stacksize(&stack) < 2)
		return ;
	while (last != NULL)
		last = last->next;
	*last->next = *first;
	first->next = NULL;
}

void	ra(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	rotate(&stack_a);
	ft_putendl_fd("ra\n", 1);
}

void	rb(t_stack **stack_b)
{
	if (!stack_b)
		return ;
	rotate(&stack_b);
	ft_putendl_fd("rb\n", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a && !stack_b)
		return ;
	rotate(&stack_a);
	rotate(&stack_b);
	ft_putendl_fd("rr\n", 1);
}
