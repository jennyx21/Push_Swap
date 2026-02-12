/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/12 21:50:30 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_if_valid_num(char *str);
int check_double(t_stack **stack);

t_stack	*validate_input(int ac, char **av)
{
	int				j;
	char			**numbers;
	t_stack 		*stack_a;
	
	stack_a = NULL;
	j = 1;
	while(ac-- > 1)
	{
		numbers = ft_split(av[j], find_witespace(av[j]));
		ft_check_valid(numbers, &stack_a);
		if(check_double(&stack_a) == 0)
			return(free(numbers), write(1, "Error\n", 6), NULL);
	
		j++;
	}	
	free(numbers);
	return (stack_a);
}

int check_double(t_stack **stack)
{
	t_stack *runner; 
	t_stack *temp;

	temp = NULL;
	runner = *stack;
	while(1)
	{
		if (runner -> next == NULL)
		return(1);
		temp = runner->next;
		if(runner ->data == temp->data)
		return(0);
		runner = runner ->next;
	}
}
int main(int argc, char **argv)
{
	t_stack *list;
	t_stack *temp;

	

	list = validate_input(argc, argv);
	if (!list)
		return(0);
	temp = list;
	printf("%d ", temp -> data);
	while(temp-> next != NULL )
		{
			temp = temp -> next;
			printf("%d ", temp -> data);
		}

	// list ist ein liked liset free9list freeed nur einen wert
	//neue funktion schreiebn die einmal durch die liste itteriert und dann alles freed
	free(list);
	return(0);
}
