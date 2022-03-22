/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:40:57 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 21:40:59 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_check_sort(t_stack *stack)
{
	t_stack	*stack_clone;

	stack_clone = stack;
	while (stack_clone->next != NULL)
	{
		if (stack_clone->data > (stack_clone->next)->data)
			return (1);
		stack_clone = stack_clone->next;
	}
	return (0);
}
