/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:52:54 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/18 12:24:09 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int		check_if_valid_num(char *str);
t_stack	*ft_newnode(int num);
void	ft_make_stack(t_stack **stack, int number);
void	error_case(void);

void	ft_check_valid(char **numbers, t_stack **stack_a)
{
	int		i;
	long	num;

	i = 0;
	while (numbers[i])
	{
		if (check_if_valid_num(numbers[i]) == 0)
			error_case();
		num = ft_atol(numbers[i]);
		if (num < -2147483648 || num > 2147483647)
			error_case();
		ft_make_stack(stack_a, num);
		i++;
	}
	ft_free_split(numbers);
}

int	check_if_valid_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_make_stack(t_stack **stack, int number)
{
	t_stack	*new;
	t_stack	*temp;

	new = ft_newnode(number);
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	temp = *stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

t_stack	*ft_newnode(int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->data = num;
	new->next = NULL;
	return (new);
}

void	error_case(void)
{
	write(1, "Error\n", 6);
	exit(-1);
}
