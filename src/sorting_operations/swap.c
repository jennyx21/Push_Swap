/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:53:00 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/16 16:13:30 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*head;
	t_stack	*next;
	t_stack	*temp;

	head = *stack;
	next = head->next;
	if (ft_stacksize(stack) < 2)
		return (NULL);
	if (!head)
		return (NULL);
	temp->data = head->data;
	temp->index = head->index;
	head->data = next->data;
	head->index = next->index;
	next->data = temp->data;
	next->index = temp->index;
}

void	sa(t_stack **stack_a)
{
	swap(&stack_a);
	ft_putendl_fd("sa\n", 1);
}

void	sb(t_stack **stack_b)
{
	swap(&stack_b);
	ft_putendl_fd("sb\n", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss\n", 1);
}
