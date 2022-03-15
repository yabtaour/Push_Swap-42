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

void	ft_rb(t_stack **stack_b)
{
	t_stack	*stack_b_clone;

	PRINT
	if (*stack_b)
	{
		stack_b_clone = *stack_b;
		*stack_b = ft_add_to_stack_back(*stack_b, stack_b_clone->data);
		*stack_b = (*stack_b)->next;
		(*stack_b)->previous = NULL;
		free(stack_b_clone);
	}
}