/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:48:44 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/24 07:48:45 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_instruction_error(t_stack **stack_a, t_stack **stack_b, char *in)
{
	ft_putstr("Error\n");
	ft_free(stack_b);
	ft_free(stack_a);
	free(in);
	exit(1);
}
