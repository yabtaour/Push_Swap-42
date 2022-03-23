/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:50:25 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:50:26 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INSTRUCTION_H
# define INSTRUCTION_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../push_swap.h"

typedef struct s_stack{
	int				data;
	struct s_stack	*next;
	struct s_stack	*previous;
	int				pos;
}	t_stack;

void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_b, t_stack **stack_a);
void	ft_add_stack_front(t_stack **stack, t_stack *node);
t_stack	*ft_create_node(int data, int pos);
void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);
void	print_sa(t_stack **stack_a);
void	print_sb(t_stack **stack_b);
void	print_ss(t_stack **stack_a, t_stack **stack_b);
void	print_pb(t_stack **stack_a, t_stack **stack_b);
void	print_pa(t_stack **stack_b, t_stack **stack_a);
void	print_ra(t_stack **stack_a);
void	print_rb(t_stack **stack_b);
void	print_rr(t_stack **stack_a, t_stack **stack_b);
void	print_rra(t_stack **stack_a);
void	print_rrb(t_stack **stack_b);

#endif