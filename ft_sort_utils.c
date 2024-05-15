/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:12:01 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 14:42:14 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_all_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_stack	*ft_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	ft_listlen(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	check_u_long_max(char **argv)
{
	int	is_zero;
	int	i;
	int	j;

	i = 1;
	is_zero = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] == '0')
		{
			j++;
			is_zero++;
		}
		while (argv[i][j])
			j++;
		if (j - is_zero > 11)
			print_error();
		i++;
	}
}
