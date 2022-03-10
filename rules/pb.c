/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:24:31 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 21:51:22 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_data *data)
{
	int	*aux_array;
	int	i;

	printf("len a:%d len b: %d", data->len_a, data->len_b);
	aux_array = malloc(data->len_b * sizeof(int));
	if (aux_array)
	{
		ft_arraycpy(aux_array, data->stack_b, data->len_b);
		data->stack_b = ft_realloc(data->stack_b, (sizeof(int) * (data->len_b + 1)));
		data->stack_b[0] = data->stack_a[0];
		i = 0;
		while (i < data->len_b)
		{
			data->stack_b[i + 1] = aux_array[i];
			i++;
		}
	}
	data->stack_b[0] = data->stack_a[0];
	data->len_a--;
	data->len_b++;
	data->stack_a = shift(data->stack_a, data->len_a);
	write(1, "pb\n", 3);
	free(aux_array);
}
