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
#include <string.h>

void	ft_execute(t_stack **stack_a, t_stack **stack_b, char *instructions)
{
	if (strcmp(instructions, "rra\n") == 0)
		ft_rra(stack_a);
	else if (strcmp(instructions, "rrb\n") == 0)
		ft_rrb(stack_b);
	else if (strcmp(instructions, "rrr\n") == 0)
		ft_rrr(stack_a, stack_b);
	else if (strcmp(instructions, "ra\n") == 0)
		ft_ra(stack_a);
	else if (strcmp(instructions, "rb\n") == 0)
		ft_rb(stack_b);
	else if (strcmp(instructions, "rr\n") == 0)
		ft_rr(stack_a, stack_b);
	else if (strcmp(instructions, "pb\n") == 0 && *stack_a)
		ft_pb(stack_a, stack_b);
	else if (strcmp(instructions, "pa\n") == 0 && *stack_b)
		ft_pa(stack_b, stack_a);
	else if (strcmp(instructions, "rra\n") == 0)
		ft_rra(stack_a);
	else if (strcmp(instructions, "sa\n") == 0)
		ft_sa(stack_a);
	else if (strcmp(instructions, "sb\n") == 0)
		ft_sb(stack_b);
}

int	main(int argc, char *argv[])
{
	char	**arguments;
	int		i;
	char	*args;
	t_stack	*stack;
	t_stack *stack_b;

	stack = NULL;
	stack_b = NULL;
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
		args = get_next_line(0);
		while (args)
		{
			ft_execute(&stack, &stack_b, args);
			args = get_next_line(0);
		}
		if (!ft_check_sorted(&stack))
			printf("OK");
		else
			printf("KO");
		ft_free(&stack);
	}
}