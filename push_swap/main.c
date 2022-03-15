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
	int j;

	stack_a = NULL;
	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			args = ft_strjoin(args, argv[i]);
			i++;
		}
		// if (ft_check_imposter(args))
		// {
		// 	printf("arguments must be numbers\n");
		// 	return (1);
		// }
		arguments = ft_split(args, ' ');
		ft_create_stack(&stack_a, arguments);
		// if (!ft_check_sort(stack_a))
		// {
		// 	printf("numbers are already sorted");
		// 	return (1);
		// }
		ft_sort(&stack_a);
	}
	return (0);
}