#include "../../push_swap.h"

int	ft_squareroot(int n)
{
	int i;
	i = 1;

	if (!n)
		return (0);
	while (i * i <= n)
		i++;
	return (i - 1);
}