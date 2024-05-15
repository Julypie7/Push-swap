/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:25:45 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:59:57 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_three(t_stack **stack)
{
	int	max;

	max = max_node(*stack)->num;
	if (max == (*stack)->num)
		ra(stack);
	else if ((*stack)->next->num == max)
		rra(stack);
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
}
