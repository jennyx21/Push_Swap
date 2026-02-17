/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/17 19:37:50 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		check_if_valid_num(char *str);
int		check_double(t_stack **stack);

t_stack	*validate_input(int ac, char **av)
{
	int		j;
	char	**numbers;
	t_stack	*stack_a;

	stack_a = NULL;
	j = 1;
	while (ac-- > 1)
	{
		numbers = ft_split(av[j], find_witespace(av[j]));
		ft_check_valid(numbers, &stack_a);
		j++;
	}
	if (check_double(&stack_a) == 0)
		return (free(numbers), write(1, "Error\n", 6), NULL);
	ft_indexing(&stack_a);
	ft_free_split(numbers);
	return (stack_a);
}

int	check_double(t_stack **stack)
{
	t_stack	*runner;
	t_stack	*temp;

	temp = NULL;
	runner = *stack;
	while (runner != NULL)
	{
		temp = runner->next;
		while (temp != NULL)
		{
			if (runner->data == temp->data)
				return (0);
			temp = temp->next;
		}
		runner = runner->next;
	}
	return (1);
}
