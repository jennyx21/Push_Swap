#include "../../push_swap.h"

void	key_sort(t_stack **a, t_stack **b)
{
	int	count;
	int	range;

	count = 0;
	range = ft_squareroot(ft_stacksize(a)) * 1.3;
	while ((*a))
	{
		if ((*a)->index <= count + range)
		{
			pb(a, b);
			if ((*b)->index <= count)
				rb(b);
			count++;
		}
		else
			ra(a);
	}
	key_sort_back(a, b);
	return ;
}

void	key_sort_back(t_stack **a, t_stack **b)
{
	int max;
	int size;
	int pos;

	while ((*b))
	{
		max = find_max_index(b);
		pos = ft_find_pos(*b, max);
		size = ft_stacksize(b);
		if (pos <= size / 2)
		{
			while ((*b)->index != max)
				rb(b);
		}
		else if (pos >= size / 2)
		{
			while ((*b)->index != max)
				rrb(b);
		}
		pa(b, a);
	}
	return ;
}