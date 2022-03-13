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
    //t_stack *stack_a_node;

    if (stack_a != NULL)
    {
        //stack_a_node = *stack_a;
        //printf("%d\n", stack_a_node->data);
        ft_add_stack_front(stack_b, *stack_a);
    }
}