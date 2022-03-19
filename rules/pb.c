/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:24:31 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/19 03:12:55 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_data *data)
{
	int	*aux_array;
	int	i;

	if (!data->stack_a[0])
		return ;
	aux_array = malloc(data->len_b * sizeof(int));
	if ((data->len_b * sizeof(int)) != 0)
	{
		ft_arraycpy(aux_array, data->stack_b, data->len_b);
		data->stack_b = ft_realloc(data->stack_b, data->len_b);
		data->stack_b[0] = data->stack_a[0];
		i = 0;
		while (i < data->len_b)
		{
			data->stack_b[i + 1] = aux_array[i];
			i++;
		}
	}
	else
		data->stack_b[0] = data->stack_a[0];
	data->stack_a = shift(data->stack_a, data->len_a);
	data->len_a--;
	data->len_b++;
	write(1, "pb\n", 3);
	free(aux_array);
}
