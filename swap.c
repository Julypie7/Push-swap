/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:50:58 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:50:53 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*aux;

	if (*stack || (*stack)->next)
	{
		aux = *stack;
		*stack = (*stack)->next;
		aux->next = (*stack)->next;
		(*stack)->next = aux;
		if (aux->next)
			aux->next->prev = aux;
		aux->prev = *stack;
		(*stack)->prev = NULL;
	}
}

void	sa(t_stack **a)
{
	if (!*a)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if (!*b)
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!*a || !*b)
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
