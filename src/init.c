/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:37:26 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/14 03:06:18 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init(t_data *data, int argc, char *argv[])
{
	int	i;

	data->stack_b = malloc(1 * sizeof(int));
	data->stack_a = malloc(argc * sizeof(int));
	data->len_a = argc - 1;
	data->len_b = 0;
	if (!data->stack_a || !data->stack_b)
		return (FALSE);
	i = 0;
	while (i < argc)
	{
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (check_duplicate(data))
	{
		write(2, "Error\n", 6);
		return (FALSE);
	}
	return (TRUE);
}

int	check_duplicate(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->len_a)
	{
		j = i + 1;
		while (j < data->len_a)
		{
			if (data->stack_a[i] == data->stack_a[j])
				return (TRUE);
			j++;
		}
		i++;
	}
	return (FALSE);
}