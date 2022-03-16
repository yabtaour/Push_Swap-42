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
	t_stack	*stack_a_clone;
	int		x;
	t_stack	*stack_a_last;

	x = 0;
	i = 0;
	PRINT
	stack_a_clone = *stack_a;
	stack_a_last = *stack_a;
	while (stack_a_last->next)
		stack_a_last = stack_a_last->next;
	while(x != 1)
    {
        if (stack_a_clone->data > stack_a_clone->next->data && stack_a_clone->data < stack_a_last->data)
            ft_sa(stack_a);
        else if (stack_a_clone->data < stack_a_clone->next->data && stack_a_clone->data < stack_a_last->data && ft_check_sort(*stack_a))
            ft_pb(stack_a, stack_b);
        else if (stack_a_clone->data > stack_a_clone->next->data && stack_a_clone->data > stack_a_last->data)
            ft_ra(stack_a);
        else if (stack_a_clone->data < stack_a_clone->next->data && stack_a_clone->data > stack_a_last->data)
            ft_rra(stack_a);
        else if (stack_a_clone->data < stack_a_clone->next->data && stack_a_clone->data < stack_a_last->data && ft_check_sort(*stack_a) && *stack_b)
            ft_pa(stack_b, stack_a);
        else
            x = ft_check_sort(*stack_a);
    }
}