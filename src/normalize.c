/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:34:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/17 16:39:53 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	normalize(t_data *data)
{
	int	i;
	int	j;
	int	*aux_stack;

	aux_stack = malloc(data->len_a * sizeof(int));
	ft_arraycpy(aux_stack, data->stack_a, data->len_a);
	bubble_sort(data);
	i = 0;
	while (i < data->len_a)
	{
		j = 0;
		while (j < data->len_a)
		{
			if (data->copy_stack[i] == aux_stack[j])
			{
				data->stack_a[j] = i + 1;
				break ;
			}
			j++;
		}
		i++;
	}
	free(aux_stack);
	free(data->copy_stack);
}

void	bubble_sort(t_data *data)
{
	int	i;
	int	j;
	int	aux;

	data->copy_stack = malloc(data->len_a * sizeof(int));
	ft_arraycpy(data->copy_stack, data->stack_a, data->len_a);
	i = 0;
	while (i < data->len_a)
	{
		j = 0;
		while (j < data->len_a - 1)
		{
			if (data->copy_stack[j] > data->copy_stack[j + 1])
			{
				aux = data->copy_stack[j];
				data->copy_stack[j] = data->copy_stack[j + 1];
				data->copy_stack[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}
