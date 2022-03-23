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

long	ft_atoi(const char *str)
{
	long	i;
	long	sign;
	long	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v'
		|| str[i] == ' ' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_create_stack(t_stack **stack_a, char **arguments)
{
	int		i;
	t_stack	*stack_clone;
	t_stack	*stack_clone2;

	i = 0;
	while (arguments[i])
	{
		*stack_a = ft_add_to_stack_back(*stack_a, ft_atoi(arguments[i]));
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
