/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:11:40 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/16 16:13:41 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				index;
	int				data;
	struct s_stack	*next;
}					t_stack;

char				find_witespace(char *str);
long				ft_atol(const char *nptr);
void				ft_check_valid(char **numbers, t_stack **stack);
void				ft_indexing(t_stack **stack);
int					ft_stacksize(t_stack **stack);

#endif