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

void	ft_sort_2nums(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	if (stack_a_clone->data > stack_a_clone->next->data)
		ft_sa(stack_a);
}

void	ft_sort_3nums(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	if (stack_a_clone->next->data < stack_a_clone->data
		&& stack_a_clone->data < stack_a_clone->next->next->data)
		ft_sa(stack_a);
	else if (stack_a_clone->data > stack_a_clone->next->data
		&& stack_a_clone->next->data > stack_a_clone->next->next->data)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (stack_a_clone->data > stack_a_clone->next->data
		&& stack_a_clone->data > stack_a_clone->next->next->data)
		ft_ra(stack_a);
	else if (stack_a_clone->next->next->data > stack_a_clone->data
		&& stack_a_clone->next->data > stack_a_clone->next->next->data)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (stack_a_clone->next->data > stack_a_clone->data
		&& stack_a_clone->data > stack_a_clone->next->next->data)
		ft_rra(stack_a);
}

int	ft_is_min(t_stack **stack_a)
{
	int	min;
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	if (stack_a && *stack_a)
	{
		min = (*stack_a)->data;
		while (stack_a_clone)
		{
			if (min > stack_a_clone->data)
				min = stack_a_clone->data;
			stack_a_clone = stack_a_clone->next;
		}
		return(min);
	}
	return (0);
}

int	ft_is_max(t_stack **stack_b)
{
	int	max;
	t_stack	*stack_b_clone;

	stack_b_clone = *stack_b;
	if (stack_b && *stack_b)
	{
		max = (*stack_b)->data;
		while (stack_b_clone)
		{
			if (max < stack_b_clone->data)
				max = stack_b_clone->data;
			stack_b_clone = stack_b_clone->next;
		}
		return(max);
	}
	return (0);
}

int		ft_find_position(t_stack	**stack_a, int	number)
{
	int		i;
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	i = 0;
	while (stack_a_clone->data != number)
	{
		stack_a_clone = stack_a_clone->next;
		i++;
	}
	return(i);	
}

int		ft_stack_size(t_stack	**stack_a)
{
	int		i;
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	i = 0;
	while (stack_a_clone)
	{
		i++;
		stack_a_clone = stack_a_clone->next;
	}
	return(i);
}

void	ft_sort_more_than3(t_stack	**stack_a,	t_stack **stack_b, int	i)
{
	t_stack	*stack_a_clone;
	int		min;

	i = 0;
	stack_a_clone = *stack_a;
	min = ft_is_min(stack_a);
	while ((ft_stack_size(stack_a)) != 3)
	{
		while(stack_a_clone->data != min)
		{
			if ((ft_find_position(stack_a, min)) >= (ft_stack_size(stack_a) / 2))
				ft_rra(stack_a);
			else
				ft_ra(stack_a);
			stack_a_clone = *stack_a;
		}
		ft_pb(stack_a, stack_b);
		min = ft_is_min(stack_a);
	}
	ft_sort_3nums(stack_a);
	while (ft_stack_size(stack_b) != 0)
		ft_pa(stack_b, stack_a);
}

void	ft_push_chunk1(t_stack **stack_a, t_stack **stack_b, int start, int end)
{
	t_stack	*stack_a_clone;
	(void )stack_b;
	stack_a_clone = *stack_a;
	while (stack_a_clone)
	{
		if (stack_a_clone->pos >= start && stack_a_clone->pos <= end)
		{
			while ((*stack_a)->data != stack_a_clone->data)
			{
				if ((ft_find_position(stack_a, stack_a_clone->data)) >= (ft_stack_size(stack_a) / 2))
					ft_rra(stack_a);
				else
					ft_ra(stack_a);
			}
			ft_pb(stack_a, stack_b);
			stack_a_clone = *stack_a;
		}
		else	
			stack_a_clone = stack_a_clone->next;
	}
}

void	ft_sort_100(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*stack_b_clone;
	int		start;
	int		max;

	start = 0;
	while (ft_stack_size(stack_a))
	{
		ft_push_chunk1(stack_a, stack_b, start, start + 44);
		start = start + 45;
	}
	stack_b_clone = *stack_b;
	while ((ft_stack_size(stack_b)) != 0)
	{
		max = ft_is_max(stack_b);
		while(stack_b_clone->data != max)
		{
			if ((ft_find_position(stack_b, max)) >= (ft_stack_size(stack_b) / 2))
				ft_rrb(stack_b);
			else
				ft_rb(stack_b);
			stack_b_clone = *stack_b;
		}
		ft_pa(stack_b, stack_a);
	}
}