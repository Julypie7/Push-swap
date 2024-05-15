/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:30:44 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:55:43 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	push(t_stack **from, t_stack **to)
{
	t_stack	*first_node;

	first_node = *from;
	*from = (*from)->next;
	if (*from)
		(*from)->prev = NULL;
	if (!*to)
	{
		*to = first_node;
		(*to)->next = NULL;
	}
	else
	{
		(*to)->prev = first_node;
		first_node->next = *to;
		*to = first_node;
	}
}

void	pa(t_stack **b, t_stack **a)
{
	if (!*b)
		return ;
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (!*a)
		return ;
	push(a, b);
	write(1, "pb\n", 3);
}
