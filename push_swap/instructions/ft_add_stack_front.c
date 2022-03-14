/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:58:29 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 19:58:30 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

void	ft_add_stack_front(t_stack **stack, t_stack *node)
{
	t_stack	*new_node;

	if (stack && !*stack)
	{
		new_node = ft_create_node(node->data);
		*stack = new_node;
		(*stack)->next = NULL;
	}
	else if (stack && *stack && node)
	{
		new_node = ft_create_node(node->data);
		new_node->next = *stack;
		(*stack)->previous = new_node;
		(*stack) = new_node;
	}
}