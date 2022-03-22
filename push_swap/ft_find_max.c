/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:06:23 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/22 08:06:24 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_is_max(t_stack **stack_b)
{
	int		max;
	t_stack	*stack_b_clone;

	stack_b_clone = *stack_b;
	max = (*stack_b)->data;
	while (stack_b_clone)
	{
		if (max < stack_b_clone->data)
			max = stack_b_clone->data;
		stack_b_clone = stack_b_clone->next;
	}
	return (max);
}

int	ft_is_second_max(t_stack **stack_b, int max)
{
	int		max1;
	t_stack	*stack_b_clone;

	stack_b_clone = *stack_b;
	max1 = (*stack_b)->data;
	while (stack_b_clone)
	{
		if (max1 < stack_b_clone->data && stack_b_clone->data != max)
			max1 = stack_b_clone->data;
		stack_b_clone = stack_b_clone->next;
	}
	return (max1);
}
