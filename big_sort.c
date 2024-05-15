/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:19:28 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 13:45:31 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

static void	min_target_closer(t_stack *a, t_stack *b)
{
	int		min;
	t_stack	*stack_b;

	while (a)
	{
		min = INT_MIN;
		stack_b = b;
		a->target = max_node(b);
		while (stack_b)
		{
			if (a->num > stack_b->num && stack_b->num >= min)
			{
				min = stack_b->num;
				a->target = stack_b;
			}
			stack_b = stack_b->next;
		}
		a = a->next;
	}
}

static void	max_target_closer(t_stack *b, t_stack *a)
{
	int		max;
	t_stack	*stack_a;

	while (b)
	{
		max = INT_MAX;
		stack_a = a;
		b->target = min_node(a);
		while (stack_a)
		{
			if (b->num < stack_a->num && stack_a->num <= max)
			{
				max = stack_a->num;
				b->target = stack_a;
			}
			stack_a = stack_a->next;
		}
		b = b->next;
	}
}

static void	a_to_b_mov(t_stack **a, t_stack **b)
{
	t_stack	*best_node;

	best_node = get_best_mov(*a);
	if (best_node->above_med == best_node->target->above_med)
	{
		if (best_node->above_med)
			while (*a != best_node && *b != best_node->target)
				rr(a, b);
		else
			while (*a != best_node && *b != best_node->target)
				rrr(a, b);
	}
	best_min_move_to_top(a, best_node, 1);
	best_min_move_to_top(b, best_node->target, 0);
	pb(a, b);
}

static void	b_to_a_mov(t_stack **a, t_stack **b)
{
	best_min_move_to_top(a, (*b)->target, 1);
	pa(b, a);
}

void	big_sort(t_stack **a, t_stack **b, int j)
{
	int	i;
	int	len;

	i = 0;
	len = ft_listlen(*a);
	while (i++ < 2 && len-- > 3 && !ft_all_sorted(*a))
		pb(a, b);
	while (len-- > 3 && !ft_all_sorted(*a))
	{
		pos_med(*a);
		pos_med(*b);
		min_target_closer(*a, *b);
		set_min_move(*a, *b);
		a_to_b_mov(a, b);
	}
	sort_three(a);
	while (*b)
	{
		pos_med(*b);
		pos_med(*a);
		max_target_closer(*b, *a);
		b_to_a_mov(a, b);
	}
	ft_last_sort(a, j);
	pos_med(*a);
}
