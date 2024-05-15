/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_a_to_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:10:12 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:59:04 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_stack	*get_best_mov(t_stack *stack)
{
	int		min_mov;
	t_stack	*best_node;

	if (!stack)
		return (NULL);
	min_mov = 2147483647;
	while (stack)
	{
		if (stack->min_mov < min_mov)
		{
			min_mov = stack->min_mov;
			best_node = stack;
		}
		stack = stack->next;
	}
	return (best_node);
}

void	best_min_move_to_top(t_stack **stack, t_stack *best_node, int i)
{
	while (*stack != best_node)
	{
		if (best_node->above_med)
		{
			if (i)
				ra(stack);
			else
				rb(stack);
		}
		else
		{
			if (i)
				rra(stack);
			else
				rrb(stack);
		}
	}
}
