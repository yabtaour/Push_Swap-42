/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 01:04:26 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/24 01:04:27 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_free(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	while ((*stack_a)->next)
	{
		stack_a_clone = (*stack_a)->next;
		free(*(stack_a));
		*stack_a = stack_a_clone;
	}
}
