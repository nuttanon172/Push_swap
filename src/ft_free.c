/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:14:59 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/09 21:25:19 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_2(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	error(t_nbr **stack_a, t_nbr **stack_b)
{
	ft_clean(stack_a);
	ft_clean(stack_b);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(255);
}

void	ft_cleanstack(t_nbr **stack_a, t_nbr **stack_b, char **nptr, int op)
{
	if (op)
	{
		ft_free_2(nptr);
		error(stack_a, stack_b);
	}
	ft_clean(stack_a);
	ft_clean(stack_b);
}
