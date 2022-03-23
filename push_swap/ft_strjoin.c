/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:21:16 by yabtaour          #+#    #+#             */
/*   Updated: 2022/03/10 16:21:18 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <string.h>

char	*ft_join_args(char *argv[], int argc)
{
	char	*args;
	int		i;

	i = 1;
	args = NULL;
	while (i < argc)
	{
		args = ft_strjoin(args, argv[i++]);
		args = ft_strjoin(args, " ");
	}
	return (args);
}

int	ft_check_int(char **arguments)
{
	int	i;

	i = 0;
	while (arguments[i])
	{
		if (ft_atoi(arguments[i]) > ft_atoi("2147483647"))
		{
			printf("Error\n");
			return (0);
		}
		if (ft_atoi(arguments[i]) < ft_atoi("-2147483648"))
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		if (!s1)
			exit(1);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!str)
		exit(1);
	i = -1;
	j = 0;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}
