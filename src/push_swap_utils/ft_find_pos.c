#include "../../push_swap.h"

int	ft_find_pos(t_stack *stack, int value)
{
	int i;

	i = 0;
	while (stack)
	{
		if ((stack->index == value))
			return (i);
		i++;
		stack = stack->next;
	}
	return (0);
}