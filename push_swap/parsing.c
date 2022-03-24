/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 23:05:07 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/23 23:05:08 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_check_not_number(char *args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if ((args[i] > '9' || args[i] < '0')
			&& args[i] != '+' && args[i] != ' ' && args[i] != '-')
		{
			printf("Error\n");
			return (0);
		}
		if (args[i] == '-' || args[i] == '+')
		{
			if (args[i + 1] == '+' || args[i + 1] == '-' || args[i + 2] == '\0')
			{
				printf("Error\n");
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	ft_check_double(t_stack **stack_a)
{
	t_stack	*stack_a_clone;
	t_stack	*stack_a_clone2;

	stack_a_clone = *stack_a;
	while (stack_a_clone)
	{
		stack_a_clone2 = stack_a_clone->next;
		while (stack_a_clone2)
		{
			if (stack_a_clone->data == stack_a_clone2->data)
			{
				printf("Error\n");
				ft_free(stack_a);
				return (0);
			}
			stack_a_clone2 = stack_a_clone2->next;
		}
		stack_a_clone = stack_a_clone->next;
	}
	return (1);
}

int	ft_check_sorted(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	while (*stack_a && stack_a_clone->next)
	{
		if (stack_a_clone->data > stack_a_clone->next->data)
			return (1);
		stack_a_clone = stack_a_clone->next;
	}
	ft_free(stack_a);
	return (0);
}
