/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:37:26 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/04 17:20:02 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init(t_data *data, int argc, char *argv[])
{
	int	number;
	int	i;

	data->qnt_int = argc;
	data->stack_a = (int *)malloc(argc * sizeof(int));
	if (data->stack_a)
		return (ERROR);
	data->stack_a[argc] = '\0';
	i = 0;
	while (i < argc)
	{
		number = ft_atoi(argv[i + 1]);
		data->stack_a[i] = number;
		i++;
	}
	return (SUCCESS);
}
