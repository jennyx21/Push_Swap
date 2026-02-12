/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/12 19:28:14 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
t_stack *ft_newnode( int num );
int check_if_valid_num(char *str);
void ft_make_stack(t_stack **stack, int number);
t_stack *ft_newnode( int num );
int check_double(t_stack **stack);

t_stack	*validate_input(int ac, char **av)
{
	int				i;
	int				j;
	long			num;
	char			**numbers;
	t_stack 		*stack_a;
	
	stack_a = NULL;
	j = 1;
	while(ac-- > 1)
	{
		numbers = ft_split(av[j], find_witespace(av[j]));
		i = 0;
		while(numbers[i] != NULL)
		{
			if(check_if_valid_num(numbers[i]) == 0)
				return(write(1, "Error\n", 6), NULL);
			num = ft_atol(numbers[i]);
			if(num < -2147483648 || num > 2147483647)
				return(write(1, "Error\n", 6), NULL);
			ft_make_stack(&stack_a, num);
			if(check_double(&stack_a) == 0)
				return(write(1, "Error\n", 6), NULL);
			i++;
		}
	j++;
	}	
	return (stack_a);
}




int check_if_valid_num(char *str)
{
	int	i;
	
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return(0);
	while (str[i])
	{
		if(ft_isdigit(str[i])== 0)
			return(0);
		i++;
	}
	return(1);
}
void ft_make_stack(t_stack **stack, int number)
{
	t_stack *new; 
	t_stack *temp;

	new = ft_newnode(number);
	
	if (*stack == NULL)
	{
		*stack = new;
		return;
	}
	temp = *stack;

	while (temp ->next != NULL)
	{
		temp = temp ->next;
	}
	temp -> next = new;
}

t_stack *ft_newnode( int num )
{
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return(0);
	new->data = num;
	new->next =NULL;
	return(new);
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
	return(0);
}
