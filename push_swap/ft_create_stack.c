/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:06:10 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 18:06:11 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_create_stack(t_stack **stack_a, char **arguments)
{
	int		i;
	t_stack	*stack_clone;
	t_stack *stack_clone2;

	i  = 0;
	while (arguments[i])
	{
		*stack_a = ft_add_to_stack_back(*stack_a, atoi(arguments[i]));
		i++;
	}
	stack_clone = *stack_a;
	while (stack_clone)
	{
		stack_clone2 = *stack_a;
		while (stack_clone2)
		{
			if (stack_clone->data > stack_clone2->data)
				stack_clone->pos++;
			stack_clone2 = stack_clone2->next;
		}
		stack_clone = stack_clone->next;
	}
}