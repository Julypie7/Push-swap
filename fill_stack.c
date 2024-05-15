/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:24:43 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/15 12:59:31 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_lstnew(t_stack **a, int num)
{
	t_stack	*node;
	t_stack	*last_node;

	if (!a)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->num = num;
	node->next = NULL;
	if (!(*a))
	{
		*a = node;
		node->prev = NULL;
	}
	else
	{
		last_node = ft_last_node(*a);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	ft_fill_stack(t_stack **lst, char **argv)
{
	int	num;
	int	i;

	i = 1;
	while (argv[i])
	{
		num = (int)ftatoi(argv[i]);
		ft_lstnew(lst, num);
		i++;
	}
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*next;

	if (*stack && stack)
	{
		tmp = *stack;
		while (tmp)
		{
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
		*stack = NULL;
	}
}
