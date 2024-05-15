/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_movements.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:50:06 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:59:16 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	movements(t_stack *stack)
{
	int	len;

	len = ft_listlen(stack);
	while (stack)
	{
		if (stack->above_med)
			stack->min_mov = stack->pos;
		else
			stack->min_mov = len - stack->pos;
		stack = stack->next;
	}
}

static void	sum_target_move(t_stack *s)
{
	while (s)
	{
		if (s->above_med == s->target->above_med
			&& s->min_mov < s->target->min_mov)
			s->min_mov = s->target->min_mov;
		else if (s->above_med != s->target->above_med)
			s->min_mov = s->min_mov + s->target->min_mov;
		s = s->next;
	}
}

void	set_min_move(t_stack *a, t_stack *b)
{
	movements(a);
	movements(b);
	sum_target_move(a);
}
