/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:23:19 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 21:17:38 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_data *data)
{
	int	*aux_array;
	int	i;

	aux_array = malloc(sizeof(int) * data->len_a);
	ft_arraycpy(aux_array, data->stack_a, data->len_a);
	data->stack_a = ft_realloc(data->stack_a, (sizeof(int) * (data->len_a + 1)));
	data->stack_a[0] = data->stack_b[0];
	i = 0;
	while (i < data->len_a)
	{
		data->stack_a[i + 1] = aux_array[i];
		i++;
	}
	data->stack_b = shift(data->stack_b, data->len_b);
	data->len_a += 1;
	data->len_b -= 1;
	write(1, "pa\n", 3);
	free(aux_array);
}
