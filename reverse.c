/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:50:26 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:53:28 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	rev(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

	if (!stack || !(*stack)->next)
		return ;
	last = ft_last_node(*stack);
	first = *stack;
	last->next = *stack;
	last->prev->next = NULL;
	first->prev = last;
	*stack = (*stack)->prev;
	(*stack)->prev = NULL;
}

void	rra(t_stack **a)
{
	rev(a);
	write (1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev(a);
	rev(b);
	write(1, "rrr\n", 4);
}
