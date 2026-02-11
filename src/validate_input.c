/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:27:24 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/11 13:49:39 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
t_stack *ft_newnode( int num );
int check_if_valid_num(char *str);
void ft_make_stack(t_stack **stack, int number);
t_stack *ft_newnode( int num );

t_stack	**validate_input(int ac, char **av)
{
	int				i;
	int				j;
	long			num;
	char			**numbers;
	struct t_stack 	*stack_a;
	
	stack_a = NULL;
	j = 1;
	while(ac-- > 1)
	{
		numbers = ft_split(*av[j], find_witespace(*av[j]));
		i = 0;
		while(numbers[i] != NULL)
		{
			if(check_if_valid_num(numbers[i]) == 0)
				return(write(1, "Error\n", 6));
			num = ft_atol(numbers[i]);
			if(num < INT_MIN || num > INT_MAX)
				return(write(1, "Error\n", 6));
			ft_make_stack(&stack_a, num);
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
	}
	temp = *stack;
	while (temp ->next != 0)
		temp = temp ->next;
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
int main(int argc, char **argv)
{
	t_stack **list;
	int i = 0;

	list = validate_input(argc, argv);
	while(*list -> next != NULL );
	
}
