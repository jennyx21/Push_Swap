/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:24:59 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/19 13:24:16 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	if (argc <= 2)
		return (0);
	stack_a = validate_input(argc, argv);
	if (!stack_a)
		return (0);
	ft_sort(argc, &stack_a, &stack_b);
	ft_free_stack(&stack_a);
	return (0);
}
