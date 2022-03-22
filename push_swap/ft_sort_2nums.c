/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:21:02 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/22 07:21:03 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sort_2nums(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	if (stack_a_clone->data > stack_a_clone->next->data)
		print_sa(stack_a);
}
