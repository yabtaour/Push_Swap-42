/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:49:14 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:49:16 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

void	ft_rrb(t_stack **stack_b)
{
	t_stack	*stack_b_clone;
	t_stack	*node;

	printf("rrb\n");
    if (*stack_b)
    {
	    stack_b_clone = *stack_b;
	    while (stack_b_clone->next)
		    stack_b_clone = stack_b_clone->next;
	    node = ft_create_node(stack_b_clone->data, stack_b_clone->pos);
	    ft_add_stack_front(stack_b, node);
	    stack_b_clone->previous->next = NULL;
	    free(stack_b_clone);
    }
}