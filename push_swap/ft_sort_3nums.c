/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 04:15:08 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/15 04:15:08 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sort_3nums(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	if (stack_a_clone->next->data < stack_a_clone->data
		&& stack_a_clone->data < stack_a_clone->next->next->data)
		print_sa(stack_a);
	else if (stack_a_clone->data > stack_a_clone->next->data
		&& stack_a_clone->next->data > stack_a_clone->next->next->data)
	{
		print_sa(stack_a);
		print_rra(stack_a);
	}
	else if (stack_a_clone->data > stack_a_clone->next->data
		&& stack_a_clone->data > stack_a_clone->next->next->data)
		print_ra(stack_a);
	else if (stack_a_clone->next->next->data > stack_a_clone->data
		&& stack_a_clone->next->data > stack_a_clone->next->next->data)
	{
		print_sa(stack_a);
		print_ra(stack_a);
	}
	else if (stack_a_clone->next->data > stack_a_clone->data
		&& stack_a_clone->data > stack_a_clone->next->next->data)
		print_rra(stack_a);
}

int	ft_is_max(t_stack **stack_b)
{
	int	max;
	t_stack	*stack_b_clone;

	stack_b_clone = *stack_b;
	max = (*stack_b)->data;
	while (stack_b_clone)
	{
		if (max < stack_b_clone->data)
			max = stack_b_clone->data;
		stack_b_clone = stack_b_clone->next;
	}
	return(max);
}

int	ft_is_second_max(t_stack **stack_b, int max)
{
	int		max1;
	t_stack	*stack_b_clone;

	stack_b_clone = *stack_b;
	max1 = (*stack_b)->data;
	while (stack_b_clone)
	{
		if (max1 < stack_b_clone->data && stack_b_clone->data != max)
			max1 = stack_b_clone->data;
		stack_b_clone = stack_b_clone->next;
	}
	return (max1);
}

void	ft_push_chunk2(t_stack **stack_a, t_stack **stack_b, int end, int chunk)
{
	int count;

	count = 0;
	while (*stack_a && count < chunk)
	{
		if ((*stack_a)->pos < end)
		{
			print_pb(stack_a, stack_b);
			if ((*stack_b)->pos > end - (chunk / 2))
			{
				if (*stack_a && (*stack_a)->pos >= end)
					print_rr(stack_a, stack_b);
				else
					print_rb(stack_b);
			}
			count++;
			continue ;
		}
		print_ra(stack_a);
	}
}

int	ft_find_po(t_stack **stack, int pos)
{
	t_stack	*stack_a_clone;
	int		i = 0;

	stack_a_clone = *stack;
	while (stack_a_clone->pos != pos)
	{
		i++;
		stack_a_clone = stack_a_clone->next;
	}
	return (i);
}

int		ft_compare_top_tail(t_stack **stack, int pos)
{
	int		top = 0;
	int		tail = 0;

	top = ft_find_po(stack, pos);
	tail = ft_stack_size(stack) - top;
	if (top >= tail)
		return (tail);
	else
		return (top);
}

void take_to_top(t_stack **stack, int pos)
{
	while((*stack)->pos != pos)
	{
		if ((ft_find_po(stack, pos)) >= (ft_stack_size(stack) / 2))
			print_rrb(stack);
		else
			print_rb(stack);
	}
}

void	ft_sort_100(t_stack **stack_a, t_stack **stack_b, int div)
{
	int		end;
	int		size;
	int		ssize;

	ssize = ft_stack_size(stack_a);
	size = ssize / div;
	end = 0;
	while (*stack_a)
	{
		end += size;
		ft_push_chunk2(stack_a, stack_b, end, size);
	}
	ssize--; // smart move 0
	while (*stack_b && ssize >= 0)
	{
		if (ssize == 0 || ft_compare_top_tail(stack_b, ssize) < ft_compare_top_tail(stack_b, ssize - 1))
		{
			take_to_top(stack_b, ssize--); // smart move 1
			print_pa(stack_b, stack_a);
		}
		else
		{
			take_to_top(stack_b, ssize - 1);
			print_pa(stack_b, stack_a);
			take_to_top(stack_b, ssize);
			print_pa(stack_b, stack_a);
			print_sa(stack_a);
			ssize -= 2;
		}
	}
}