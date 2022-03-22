/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:11:16 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/22 08:11:16 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_find_position(t_stack **stack_a, int number)
{
	int		i;
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	i = 0;
	while (stack_a_clone->data != number)
	{
		stack_a_clone = stack_a_clone->next;
		i++;
	}
	return (i);
}

int	ft_find_po(t_stack **stack, int pos)
{
	t_stack	*stack_a_clone;
	int		i;

	i = 0;
	stack_a_clone = *stack;
	while (stack_a_clone->pos != pos)
	{
		i++;
		stack_a_clone = stack_a_clone->next;
	}
	return (i);
}
