/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 12:22:27 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_stacksize_and_pos(t_stack **stack)
{
	int		i;
	t_stack	*head;

	i = 0;
	head = *stack;
	while (head != NULL)
	{
		i++;
		head->pos = i;
		head = head->next;
	}
	return (i);
}
long	calc_value(t_stack *stack, int n)
{
	long	value;
	int		num;
	t_stack *temp;

	temp = stack;
	while (temp != NULL && temp->pos != n)
	{
		num = temp->index;
		value += num;
		temp = temp ->next;
		
	}
	return (value);
}

void	get_from_back(t_stack **a, t_stack **b, int range, int count)
{
	while(1)
	{
	if ((*a)->index <= count + range)
	{
		pb(a, b);
		if ((*b)->index <= count)
			rb(b);
		return ;
	}
	else
	rra(a);
	}
}

void	get_from_front(t_stack **a, t_stack **b, int range, int count)
{
	while(1)
	{
		if ((*a)->index <= count + range)
		{
			pb(a, b);
			if ((*b)->index <= count)
				rb(b);
			return;
		}
		else
		ra(a);
	}
}


void	key_sort(t_stack **a, t_stack **b)
{
	int		count;
	int		range;
	int		size;
	long	value;
	long	comp;

	count = 0;
	while ((*a))
	{
		range = ft_squareroot(ft_stacksize(a)) * 2;
		size = ft_stacksize_and_pos(a);
		value = calc_value(*a, size);
		comp = calc_value(*a, size / 2);
		if (value / 2 > comp + range)
			get_from_front(a, b, range, count++);
		else
			get_from_back(a, b, range, count++);
	}
	key_sort_back(a, b);
	return ;
}



void	key_sort_back(t_stack **a, t_stack **b)
{
	int	max;
	int	size;
	int	pos;

	while ((*b))
	{
		max = find_max_index(b);
		pos = ft_find_pos(*b, max);
		size = ft_stacksize(b);
		if (pos <= size / 2)
		{
			while ((*b)->index != max)
				rb(b);
		}
		else if (pos >= size / 2)
		{
			while ((*b)->index != max)
				rrb(b);
		}
		pa(b, a);
	}
	return ;
}
