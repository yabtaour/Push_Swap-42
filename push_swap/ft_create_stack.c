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

void	ft_create_stack(t_stack **stack_a, char **arguments)
{
	int		i;

	i  = 0;
	while (arguments[i])
	{
		*stack_a = ft_add_to_stack(*stack_a, atoi(arguments[i]));
		i++;
	}
}