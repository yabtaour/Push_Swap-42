/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:36:50 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/13 20:36:52 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    ft_sort(t_stack **stack_a)
{
	t_stack	*stack_a_clone;
	t_stack	*stack_b;
	int		i;

	i = 0;
	stack_b = NULL;
	stack_a_clone = *stack_a;
	while (stack_a_clone != NULL)
	{
		i++;
		stack_a_clone = stack_a_clone->next;
	}
	if (i == 2)
		ft_sort_2nums(stack_a);
	if (i == 3)
		ft_sort_3nums(stack_a);
	if (i > 3 && i < 30)
		ft_sort_more_than3(stack_a, &stack_b, i);
	if (i >= 30)
		ft_sort_100(stack_a);
	// stack_a_clone = *stack_a;
	// while (stack_a_clone)
	// {
	// 	printf("[%d-%d]->", stack_a_clone->data, stack_a_clone->pos);
	// 	stack_a_clone = stack_a_clone->next;
	// }
	// printf("\n");
}