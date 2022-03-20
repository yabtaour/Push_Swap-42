/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:49:42 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:49:43 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "instruction.h"

void    ft_sb(t_stack **stack_b)
{
	t_stack *stack_b_clone;
	int     data_temp;
	int		pos_temp;

	PRINT
	stack_b_clone = *stack_b;
	if (stack_b != NULL)
	{
		if (stack_b_clone->next != NULL)
		{
			data_temp = stack_b_clone->data;
			pos_temp = stack_b_clone->pos;
			stack_b_clone->data = stack_b_clone->next->data;
			stack_b_clone->pos = stack_b_clone->next->pos;
			stack_b_clone->next->data = data_temp;
			stack_b_clone->next->pos = pos_temp;
		}
	}
}