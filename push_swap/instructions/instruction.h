/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:50:25 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/11 14:50:26 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INSTRUCTION_H
# define INSTRUCTION_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# define PRINT printf("\nthe function is [%s]\n", __func__);

typedef struct s_stack{
    int data;
    struct s_stack *next;
    struct s_stack *previous; 
}     t_stack;

void	ft_sa(t_stack **stack_a);
void    ft_sb(t_stack **stack_b);
void    ft_ss(t_stack **stack_a, t_stack **stack_b);
void    ft_pb(t_stack **stack_a, t_stack **stack_b);
void    ft_pa(t_stack **stack_b, t_stack **stack_a);
void	ft_add_stack_front(t_stack **stack, t_stack *node);
t_stack *ft_create_node(int	data);

#endif