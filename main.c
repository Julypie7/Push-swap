/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:26:47 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/16 11:35:46 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	check_u_long_max(argv);
	if (dupl(argv) || limits(argv) || check_char(argv))
		print_error();
	ft_fill_stack(&a, argv);
	if (!ft_all_sorted(a))
	{
		if (ft_listlen(a) == 2)
			sa(&a);
		else if (ft_listlen(a) == 3)
			sort_three(&a);
		else if (ft_listlen(a) <= 5)
			big_sort(&a, &b, 1);
		else
			big_sort(&a, &b, 0);
	}
	ft_free_stack(&a);
	return (0);
}
/*void print_list(t_stack *stack_a, t_stack *stack_b)
{
    while (stack_a != NULL || stack_b != NULL)
	{
		if (stack_b && stack_a)
		{
			printf("| %i  :  %u |     | %i  :  %u |\n", stack_a->num,
					stack_a->pos, stack_b->num, stack_b->pos);
			stack_a = stack_a->next;
			stack_b = stack_b->next;
		}
		else if (stack_a)
		{
			printf("| %i  :  %u |\n", stack_a->num,	stack_a->pos);
			stack_a = stack_a->next;
		}
		else if (stack_b)
		{
			printf("| %i  :  %u |\n", stack_b->num,
					stack_b->pos);
			stack_b = stack_b->next;
		}
    }
}*/
