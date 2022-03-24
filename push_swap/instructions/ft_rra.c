/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:49:10 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:49:11 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

void	print_rra(t_stack **stack_a)
{
	ft_putstr("rra\n");
	ft_rra(stack_a);
}

void	ft_rra(t_stack **stack_a)
{
	t_stack	*stack_a_clone;
	t_stack	*node;

	if (*stack_a)
	{
		stack_a_clone = *stack_a;
		while (stack_a_clone->next)
			stack_a_clone = stack_a_clone->next;
		node = ft_create_node(stack_a_clone->data, stack_a_clone->pos);
		ft_add_stack_front(stack_a, node);
		free(stack_a_clone);
		stack_a_clone->previous->next = NULL;
	}
}
