/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:34:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/11 22:05:13 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	bubble_sort(t_data *data)
{
	int	i;
	int j;
	int	aux;

	data->copy_stack = malloc(data->len_a * sizeof(int));
	ft_arraycpy(data->copy_stack, data->stack_a, data->len_a);
	i = 0;
	while (i < data->len_a)
	{
		j = 0;
		printf("outer loop = %d\n", i);
		print_stack(data->len_a, data->copy_stack);
		while (j < data->len_a - 1)
		{
			if (data->copy_stack[j] > data->copy_stack[j + 1])
			{
				printf("j: %d\n", data->copy_stack[j]);
				printf("j + 1: %d\n", data->copy_stack[j + 1]);
				aux = data->copy_stack[j];
				data->copy_stack[j] = data->copy_stack[j + 1];
				data->copy_stack[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}
