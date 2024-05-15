/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:23:24 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/16 11:36:23 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	int				above_med;
	int				pos;
	int				min_mov;
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*target;
}	t_stack;

int		main(int argc, char **argv);
void	print_error(void);
long	ftatoi(char *str);
void	check_u_long_max(char **argv);
int		limits(char **argv);
int		dupl(char **argv);
int		check_char(char **argv);
void	ft_fill_stack(t_stack **lst, char **argv);
t_stack	*ft_last_node(t_stack *stack);
int		ft_listlen(t_stack *stack);
int		ft_all_sorted(t_stack *lst);
t_stack	*max_node(t_stack *stack);
t_stack	*min_node(t_stack *stack);
void	sort_three(t_stack **stack);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	big_sort(t_stack **a, t_stack **b, int i);
t_stack	*get_best_mov(t_stack *stack);
void	best_min_move_to_top(t_stack **stack, t_stack *best_node, int i);
void	set_min_move(t_stack *a, t_stack *b);
t_stack	*ft_closest_bigger(t_stack *a, t_stack *b);
void	find_target_node_b(t_stack *a, t_stack *b);
t_stack	*ft_closest_smaller(t_stack *a, t_stack *b);
void	find_target_node_a(t_stack *a, t_stack *b);
void	pos_med(t_stack *stack);
void	ft_last_sort(t_stack **stack, int i);
void	ft_free_stack(t_stack **stack);
//void print_list(t_stack *stack_a, t_stack *stack_b);

#endif
