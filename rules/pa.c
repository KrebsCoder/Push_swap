/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:23:19 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/10 02:31:01 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_data *data)
{
	int	*aux_array;
	int	i;

	if (!data->stack_b[0])
		return ;
	aux_array = malloc(data->len_a * sizeof(int));
	if ((data->len_a * sizeof(int)) != 0)
	{
		ft_arraycpy(aux_array, data->stack_a, data->len_a);
		data->stack_a = ft_realloc(data->stack_a, data->len_a);
		data->stack_a[0] = data->stack_b[0];
		i = 0;
		while (i < data->len_a)
		{
			data->stack_a[i + 1] = aux_array[i];
			i++;
		}
	}
	else
		data->stack_a[0] = data->stack_b[0];
	data->stack_b = shift(data->stack_b, data->len_b);
	data->len_a++;
	data->len_b--;
	write(1, "pa\n", 3);
	free(aux_array);
}
