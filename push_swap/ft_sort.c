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
	t_stack	*stack_b_clone;
	t_stack	*stack_b = NULL;

	stack_a_clone = *stack_a;
	printf("stack_a = ");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	ft_sa(stack_a);
	stack_a_clone = *stack_a;
	printf("\nstack_a = ");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	ft_pb(stack_a, &stack_b);
	ft_pb(stack_a, &stack_b);
	stack_b_clone = stack_b;
	printf("\nstack_b = ");
	while (stack_b_clone != NULL)
	{
		printf("[%d]->", stack_b_clone->data);
		stack_b_clone = stack_b_clone->next;
	}

	ft_pa(&stack_b, stack_a);
	ft_pa(&stack_b, stack_a);
	stack_a_clone = *stack_a;
	printf("\nstack_a = ");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	stack_b_clone = stack_b;
	printf("\nstack_b = ");
	while (stack_b_clone != NULL)
	{
		printf("[%d]->", stack_b_clone->data);
		stack_b_clone = stack_b_clone->next;
	}
}