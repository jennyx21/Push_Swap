/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:11:40 by jtruckse          #+#    #+#             */
/*   Updated: 2026/01/20 17:50:54 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <limits.h>
#include "libft/libft.h"

typedef struct s_push_swap_node
{
	int data;
	t_push_swap_node *head;
	t_push_swap_node *next;
	
} t_push_swap_node;




#endif