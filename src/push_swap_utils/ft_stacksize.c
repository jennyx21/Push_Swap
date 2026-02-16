/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:58:38 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/16 16:12:34 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_stacksize(t_stack **stack)
{
	int		i;
	t_stack	*head;

	i = 0;
	head = *stack;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
