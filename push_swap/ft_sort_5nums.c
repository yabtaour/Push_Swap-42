/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:23:52 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/22 07:23:53 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_is_min(t_stack **stack_a)
{
	int		min;
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	if (stack_a && *stack_a)
	{
		min = (*stack_a)->data;
		while (stack_a_clone)
		{
			if (min > stack_a_clone->data)
				min = stack_a_clone->data;
			stack_a_clone = stack_a_clone->next;
		}
		return (min);
	}
	return (0);
}

int	ft_stack_size(t_stack	**stack_a)
{
	int		i;
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	i = 0;
	while (stack_a_clone)
	{
		i++;
		stack_a_clone = stack_a_clone->next;
	}
	return (i);
}

int	ft_find_position(t_stack **stack_a, int number)
{
	int		i;
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	i = 0;
	while (stack_a_clone->data != number)
	{
		stack_a_clone = stack_a_clone->next;
		i++;
	}
	return (i);
}

void	ft_sort_more_than3(t_stack **stack_a, t_stack **stack_b, int i)
{
	t_stack	*stack_a_clone;
	int		min;
	int		pos;

	i = 0;
	stack_a_clone = *stack_a;
	min = ft_is_min(stack_a);
	while ((ft_stack_size(stack_a)) != 3)
	{
		while (stack_a_clone->data != min)
		{
			pos = ft_find_position(stack_a, min);
			if (pos >= (ft_stack_size(stack_a) / 2))
				print_rra(stack_a);
			else
				print_ra(stack_a);
			stack_a_clone = *stack_a;
		}
		print_pb(stack_a, stack_b);
		min = ft_is_min(stack_a);
	}
	ft_sort_3nums(stack_a);
	while (ft_stack_size(stack_b) != 0)
		print_pa(stack_b, stack_a);
}
