/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:48:20 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:48:21 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

void    ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *stack_clone_a;

	if (stack_a != NULL)
	{
		PRINT
		stack_clone_a = *stack_a;
		if (stack_clone_a->next == NULL)
			*stack_a = NULL;
		else
		{
			*stack_a = stack_clone_a->next;
			free(stack_clone_a);
		}
		ft_add_stack_front(stack_b, stack_clone_a);
	}
}