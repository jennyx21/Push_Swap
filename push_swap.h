/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:11:40 by jtruckse          #+#    #+#             */
/*   Updated: 2026/02/12 19:23:43 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <limits.h>
#include "libft/libft.h"

typedef struct s_stack
{
	int data;
	struct s_stack *next;
	
} t_stack;


char	find_witespace(char *str);
long	ft_atol(const char *nptr);
int		*ft_check_valid(char *numbers);





#endif