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

	PRINT
	printf("stack a = \n");
	stack_a_clone = *stack_a;
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n");
	ft_sa(stack_a);
	stack_a_clone = *stack_a;
	printf("stack a = \n");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n");
	stack_b_clone = stack_b;
	printf("stack b = \n");
	while (stack_b_clone != NULL)
	{
		printf("[%d]->", stack_b_clone->data);
		stack_b_clone = stack_b_clone->next;
	}
	printf("\n");
	ft_pb(stack_a, &stack_b);
	stack_a_clone = *stack_a;
	printf("stack a = \n");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n");
	stack_b_clone = stack_b;
	printf("stack b = \n");
	while (stack_b_clone != NULL)
	{
		printf("[%d]->", stack_b_clone->data);
		stack_b_clone = stack_b_clone->next;
	}
	printf("\n");
	ft_pb(stack_a, &stack_b);
	stack_a_clone = *stack_a;
	printf("stack a = \n");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n");
	stack_b_clone = stack_b;
	printf("stack b = \n");
	while (stack_b_clone != NULL)
	{
		printf("[%d]->", stack_b_clone->data);
		stack_b_clone = stack_b_clone->next;
	}
	printf("\n");
	ft_ss(stack_a, &stack_b);
	stack_a_clone = *stack_a;
	printf("stack a = \n");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n");
	stack_b_clone = stack_b;
	printf("stack b = \n");
	while (stack_b_clone != NULL)
	{
		printf("[%d]->", stack_b_clone->data);
		stack_b_clone = stack_b_clone->next;
	}
	printf("\n");
	printf("\n");
	ft_ss(stack_a, &stack_b);
	stack_a_clone = *stack_a;
	printf("stack a = \n");
	while (stack_a_clone)
	{
		printf("[%d]->", stack_a_clone->data);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n");
	stack_b_clone = stack_b;
	printf("stack b = \n");
	while (stack_b_clone != NULL)
	{
		printf("[%d]->", stack_b_clone->data);
		stack_b_clone = stack_b_clone->next;
	}
	printf("\n");
	// printf("\n");
	// ft_pa(&stack_b, stack_a);
	// stack_b_clone = stack_b;
	// printf("stack b = \n");
	// while (stack_b_clone != NULL)
	// {
	// 	printf("[%d]->", stack_b_clone->data);
	// 	stack_b_clone = stack_b_clone->next;
	// }
	// printf("\n");
	// stack_a_clone = *stack_a;
	// printf("stack a = \n");
	// while (stack_a_clone)
	// {
	// 	printf("[%d]->", stack_a_clone->data);
	// 	stack_a_clone = stack_a_clone->next;
	// }
	// printf("\n");
	// ft_pa(&stack_b, stack_a);
	// stack_a_clone = *stack_a;
	// printf("stack a = \n");
	// while (stack_a_clone)
	// {
	// 	printf("[%d]->", stack_a_clone->data);
	// 	stack_a_clone = stack_a_clone->next;
	// }
	// printf("\n");
	// stack_b_clone = stack_b;
	// printf("stack b = \n");
	// while (stack_b_clone != NULL)
	// {
	// 	printf("[%d]->", stack_b_clone->data);
	// 	stack_b_clone = stack_b_clone->next;
	// }
	// printf("\n");
}