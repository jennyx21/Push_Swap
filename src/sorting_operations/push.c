/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:49:57 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/16 18:11:58 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack	*temp;

	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	temp->next = *stack_dest;
	*stack_dest = temp;
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
	if (!stack_b)
		return ;
	push(&stack_b, &stack_a);
	ft_putendl_fd("pa\n", 1);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a)
		return ;
	push(&stack_a, &stack_b);
	ft_putendl_fd("pb\n", 1);
}
