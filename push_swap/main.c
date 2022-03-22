/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:45:43 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 14:45:47 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"


int	ft_check_not_number(char *args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if ((args[i] > '9' || args[i] < '0')
			&& args[i] != '+' && args[i] != ' ' && args[i] != '-')
			return (0);
		if (args[i] == '-' || args[i] == '+')
		{
			if (args[i + 1] == '+' || args[i + 1] == '-' || args[i + 2] == '\0')
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_double(t_stack **stack_a)
{
	t_stack	*stack_a_clone;
	t_stack	*stack_a_clone2;

	stack_a_clone = *stack_a;
	while (stack_a_clone)
	{
		stack_a_clone2 = stack_a_clone->next;
		while (stack_a_clone2)
		{
			if (stack_a_clone->data == stack_a_clone2->data)
			{
				printf("Error\n");
				return (0);
			}
			stack_a_clone2 = stack_a_clone2->next;
		}
		stack_a_clone = stack_a_clone->next;
	}
	return (1);
}

int	ft_check_sorted(t_stack **stack_a)
{
	t_stack	*stack_a_clone;

	stack_a_clone = *stack_a;
	while (stack_a_clone->next)
	{
		if (stack_a_clone->data > stack_a_clone->next->data)
			return (1);
		stack_a_clone = stack_a_clone->next;
	}
	return (0);
}

void	free_split(char **arguments)
{
	int	i;

	i = 0;
	while (arguments[i])
	{
		free(arguments[i]);
		i++;
	}
	free(arguments);
}

void f(void)
{
	system("leaks push_swap");
}

int	main(int argc, char *argv[])
{
	char	**arguments;
	int		i;
	char	*args;
	t_stack	*stack_a;
	//t_stack *stack_a_clone;

	stack_a = NULL;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			args = ft_strjoin(args, argv[i++]);
			args = ft_strjoin(args, " ");
		}
		if (!ft_check_not_number(args))
			return (0);
		arguments = ft_split(args, ' ');
		free(args);
		ft_create_stack(&stack_a, arguments);
		free_split(arguments);
		if (!ft_check_double(&stack_a) || !ft_check_sorted(&stack_a))
			return (0);
		ft_sort(&stack_a);
	}
	return (0);
}
