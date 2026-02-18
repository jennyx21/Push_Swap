/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:53:00 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 22:12:34 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*head;
	t_stack	*next;
	int		data;
	int		index;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	head = *stack;
	next = head->next;
	if (ft_stacksize(stack) < 2)
		return ;
	data = head->data;
	index = head->index;
	head->data = next->data;
	head->index = next->index;
	next->data = data;
	next->index = index;
}

void	sa(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack **stack_b)
{
	if (!stack_b)
		return ;
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_b && !stack_a)
		return ;
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}
