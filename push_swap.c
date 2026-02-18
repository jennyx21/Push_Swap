/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:24:59 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 15:21:16 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*temp;

	// t_stack	*stack_b;
	// stack_b = NULL;
	if (argc < 1)
		return (0);
	stack_a = validate_input(argc, argv);
	if (!stack_a)
		return (0);
	temp = stack_a;
	printf("%d", temp->data);
	printf("	%d\n", temp->index);
	while (temp->next != NULL)
	{
		temp = temp->next;
		printf("%d", temp->data);
		printf("	%d\n", temp->index);
	}
	ft_sort(argc, &stack_a);
	ft_free_stack(&stack_a);
	return (0);
}
