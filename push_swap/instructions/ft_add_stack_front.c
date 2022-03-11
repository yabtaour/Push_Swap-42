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
	t_stack	*stack_clone;

	stack_clone = *stack;
	node->next = stack_clone;
	stack_clone->previous = node;
}