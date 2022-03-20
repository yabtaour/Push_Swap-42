/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:19:21 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 17:19:23 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack *ft_new_node(int data)
{
	t_stack *node;

	node = NULL;
	if (data)
	{
		node = malloc(sizeof(t_stack));
		node->data = data;
		node->previous = NULL;
		node->next = NULL;
		node->pos = 0;
	}
	return (node);
}