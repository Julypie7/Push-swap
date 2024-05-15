/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:35:01 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:52:20 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	rot(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

	if (!*stack || !(*stack)->next)
		return ;
	last = ft_last_node(*stack);
	first = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next = first;
	first->next = NULL;
	first->prev = last;
}

void	ra(t_stack **a)
{
	rot(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rot(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rot(a);
	rot(b);
	write(1, "rr\n", 3);
}
