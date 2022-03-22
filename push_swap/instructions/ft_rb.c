/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:48:34 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:48:35 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"


void	print_rb(t_stack **stack_b)
{
	printf("rb\n");
	ft_rb(stack_b);
}

void	ft_rb(t_stack **stack_b)
{
	t_stack	*stack_b_clone;

	if (*stack_b)
	{
		stack_b_clone = *stack_b;
		*stack_b = ft_add_to_stack_back_pos(*stack_b, stack_b_clone->data, stack_b_clone->pos);
		*stack_b = (*stack_b)->next;
		(*stack_b)->previous = NULL;
	}
}