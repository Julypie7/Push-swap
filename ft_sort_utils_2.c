/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:33:25 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 13:44:17 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_stack	*max_node(t_stack *stack)
{
	int		nbr;
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	nbr = INT_MIN;
	while (stack)
	{
		if (stack->num > nbr)
		{
			nbr = stack->num;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_stack	*min_node(t_stack *stack)
{
	int		nbr;
	t_stack	*min_node;

	if (!stack)
		return (NULL);
	nbr = INT_MAX;
	while (stack)
	{
		if (stack->num < nbr)
		{
			nbr = stack->num;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

void	pos_med(t_stack *stack)
{
	int	med;
	int	i;

	i = 0;
	med = ft_listlen(stack);
	if (med % 2 == 0)
		med /= 2;
	else
		med = (med + 1) / 2;
	while (stack)
	{
		if (i < med)
		{
			stack->above_med = 1;
			stack->pos = i;
		}
		else
		{
			stack->above_med = 0;
			stack->pos = i;
		}
		stack = stack->next;
		i++;
	}
}

void	ft_last_sort(t_stack **stack, int i)
{
	t_stack	*m_node;

	m_node = min_node(*stack);
	while (*stack != m_node)
	{
		if (i)
		{
			if (!m_node->above_med)
				ra(stack);
			else
				rra(stack);
		}
		else
		{
			if (m_node->above_med)
				ra(stack);
			else
				rra(stack);
		}
	}
}
