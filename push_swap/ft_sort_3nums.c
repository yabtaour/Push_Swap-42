/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 04:15:08 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/15 04:15:08 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sort_2nums(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	if (stack_a_clone->data > stack_a_clone->next->data)
		ft_sa(stack_a);
}

void	ft_sort_3nums(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	PRINT
	stack_a_clone = *stack_a;
	if (stack_a_clone->next->data < stack_a_clone->data
		&& stack_a_clone->data < stack_a_clone->next->next->data)
		ft_sa(stack_a);
	else if (stack_a_clone->data > stack_a_clone->next->data
		&& stack_a_clone->next->data > stack_a_clone->next->next->data)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (stack_a_clone->data > stack_a_clone->next->data
		&& stack_a_clone->data > stack_a_clone->next->next->data)
		ft_ra(stack_a);
	else if (stack_a_clone->next->data > stack_a_clone->data
		&& stack_a_clone->data < stack_a_clone->next->next->data)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (stack_a_clone->next->data > stack_a_clone->data
		&&stack_a_clone->data > stack_a_clone->next->next->data)
		ft_rra(stack_a);
}

void	ft_sort_more_than3(t_stack	**stack_a,	t_stack **stack_b, int	i)
{
	PRINT
	if (i == 4)
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
			ft_sa(stack_a);
		ft_pb(stack_a, stack_b);
		ft_sort_3nums(stack_a);
		ft_pa(stack_b, stack_a);
	}
	else if (i == 5)
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
			ft_sa(stack_a);
		ft_pb(stack_a, stack_b);
		if ((*stack_a)->data > (*stack_a)->next->data)
			ft_sa(stack_a);
		ft_pb(stack_a, stack_b);
		ft_sort_3nums(stack_a);
		ft_pa(stack_b, stack_a);
		ft_pa(stack_b, stack_a);
	}
}
