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

// int		ft_check_chunk1(t_stack **stack_a)
// {
// 	t_stack	*stack_clone;

// 	stack_clone = *stack_a;
// 	while (stack_clone)
// 	{
// 		if (stack_clone->pos >= 0 && stack_clone->pos <= 19)
// 			return (1);
// 		stack_clone = stack_clone->next;
// 	}
// 	return(0);
// }

void	ft_push_chunk1(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*stack_a_clone;
	int flag = 0;
	
	(void )stack_b;
	stack_a_clone = *stack_a;
	while (stack_a_clone)
	{
		printf("[%d-%d]->", stack_a_clone->data, stack_a_clone->pos);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n\n\n\n");
	stack_a_clone = *stack_a;
	while (stack_a_clone)
	{
		flag  = 0;
		if (stack_a_clone->pos >= 0 && stack_a_clone->pos <= 19)
		{
			while ((*stack_a)->data != stack_a_clone->data)
			{
				printf("\n%d\n", stack_a_clone->data);
				if ((ft_find_position(stack_a, stack_a_clone->data)) >= (ft_stack_size(stack_a) / 2))
					ft_rra(stack_a);
				else
					ft_ra(stack_a);
			}
			//ft_pb(stack_a, stack_b);
			break;
			flag = 1;
		}
		if(flag == 0)
			stack_a_clone = stack_a_clone->next;
	}
	stack_a_clone = *stack_a;
	while (stack_a_clone)
	{
		printf("[%d-%d]->", stack_a_clone->data, stack_a_clone->pos);
		stack_a_clone = stack_a_clone->next;
	}
	printf("\n");
}

void	ft_sort_100(t_stack **stack_a)
{
	t_stack	*stack_a_clone;
	t_stack *stack_b;

	stack_a_clone = *stack_a;
	ft_push_chunk1(stack_a, &stack_b);
}