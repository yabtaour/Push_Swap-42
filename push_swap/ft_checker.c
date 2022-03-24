/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:29:52 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/23 21:29:56 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_execute(t_stack **stack_a, char *instructions)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_strcmp(instructions, "rra\n") == 0)
		ft_rra(stack_a);
	else if (ft_strcmp(instructions, "rrb\n") == 0)
		ft_rrb(&stack_b);
	else if (ft_strcmp(instructions, "rrr\n") == 0)
		ft_rrr(stack_a, &stack_b);
	else if (ft_strcmp(instructions, "ra\n") == 0)
		ft_ra(stack_a);
	else if (ft_strcmp(instructions, "rb\n") == 0)
		ft_rb(&stack_b);
	else if (ft_strcmp(instructions, "rr\n") == 0)
		ft_rr(stack_a, &stack_b);
	else if (ft_strcmp(instructions, "pb\n") == 0 && *stack_a)
		ft_pb(stack_a, &stack_b);
	else if (ft_strcmp(instructions, "pa\n") == 0 && stack_b)
		ft_pa(&stack_b, stack_a);
	else if (ft_strcmp(instructions, "rra\n") == 0)
		ft_rra(stack_a);
	else if (ft_strcmp(instructions, "sa\n") == 0)
		ft_sa(stack_a);
	else if (ft_strcmp(instructions, "sb\n") == 0)
		ft_sb(&stack_b);
}

void	ft_result(t_stack **stack)
{
	if (!ft_check_sorted(stack))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

void	ft_read_line(t_stack **stack)
{
	char	*args;

	args = get_next_line(0);
	while (args)
	{
		ft_execute(stack, args);
		free(args);
		args = get_next_line(0);
	}
}

int	main(int argc, char *argv[])
{
	char	**arguments;
	int		i;
	char	*args;
	t_stack	*stack;

	stack = NULL;
	i = 1;
	if (argc > 1)
	{
		args = ft_join_args(argv, argc);
		if (!ft_check_not_number(args))
			return (0);
		arguments = ft_split(args, ' ');
		if (!ft_check_int(arguments))
			return (0);
		free(args);
		ft_create_stack(&stack, arguments);
		free_split(arguments);
		if (!ft_check_double(&stack) || !ft_check_sorted(&stack))
			return (0);
		ft_read_line(&stack);
		ft_result(&stack);
		ft_free(&stack);
	}
}
