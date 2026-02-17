/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:24:59 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/17 13:36:28 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*temp;
	t_stack	*stack_b;

	stack_b = NULL;
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
	if (find_max_index(stack_a) < 3)
		sort_small(stack_a, stack_b);
	free(stack_a);
	return (0);
}
// list ist ein liked liset free9list freeed nur einen wert
// neue funktion schreiebn die einmal durch die liste itteriert und dann alles freed