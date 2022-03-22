/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:48:28 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:48:29 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"


void	print_ra(t_stack **stack_a)
{
	printf("ra\n");
	ft_ra(stack_a);
}

void	ft_ra(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	if (*stack_a)
	{
		stack_a_clone = *stack_a;
		*stack_a = ft_add_to_stack_back_pos(*stack_a, stack_a_clone->data, stack_a_clone->pos);
		*stack_a = (*stack_a)->next;
		free((*stack_a)->previous);
		(*stack_a)->previous = NULL;
	}
}