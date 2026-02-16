#include "../../push_swap.h"

void ft_indexing(t_stack **stack)
{
	t_stack *runner; 
	t_stack *temp;
	int i;

	temp = *stack;
	while(temp != NULL)
	{	
		runner = *stack;
		i = 0;
		while(runner != NULL)
		{
			if(runner -> data < temp ->data)	
				i++;
			runner = runner ->next;
		}
		temp-> index = i;
		temp = temp ->next;
	}
}

