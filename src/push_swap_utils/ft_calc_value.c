/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 12:22:27 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../push_swap.h"

long	ft_calc_value(t_stack *stack, int n)
{
	long	value;
	int		num;
	t_stack	*temp;

	temp = stack;
	while (temp != NULL && temp->pos != n)
	{
		num = temp->index;
		value += num;
		temp = temp ->next;
	}
	return (value);
}
