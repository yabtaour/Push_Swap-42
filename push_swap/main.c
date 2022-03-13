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

int main(int argc, char *argv[])
{
	char	**arguments;
	int		i;
	char	*args;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack *stack_a_clone;
	t_stack *stack_b_clone;
	int j;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			args = ft_strjoin(args, argv[i]);
			i++;
		}
		if (ft_check_imposter(args))
		{
			printf("arguments must be numbers\n");
			return (1);
		}
		arguments = ft_split(args, ' ');
		ft_create_stack(&stack_a, arguments);
		if (!ft_check_sort(stack_a))
		{
			printf("numbers are already sorted");
			return (1);
		}
		stack_a_clone = stack_a;
		while (stack_a_clone != NULL)
		{
			printf("%d\n", stack_a_clone->data);
			stack_a_clone = stack_a_clone->next;
		}
		printf("\n");
		ft_pb(&stack_a, &stack_b);
		stack_b_clone = stack_b;
		while (stack_b_clone != NULL)
		{
			printf("%d\n", stack_b_clone->data);
			stack_b_clone = stack_b_clone->next;
		}
		printf("\n");
		printf("\n");
		stack_a_clone = stack_a;
		while (stack_a_clone != NULL)
		{
			
			printf("%d\n", stack_a_clone->data);
			stack_a_clone = stack_a_clone->next;
		}
		printf("\n");
		printf("\n");
		ft_pa(&stack_b, &stack_a);
		stack_a_clone = stack_a;
		while (stack_a_clone != NULL)
		{
			
			printf("%d\n", stack_a_clone->data);
			stack_a_clone = stack_a_clone->next;
		}
	}
	return (0);
}