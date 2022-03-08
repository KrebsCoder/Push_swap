/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:24:31 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 04:06:10 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_data *data)
{
	int	len;
	int	*aux_array;
	int	i;

	len = array_len(data->stack_b);
	aux_array = malloc(sizeof(int) * len);
	ft_memcpy(aux_array, data->stack_b, len);
	free(data->stack_b);
	data->stack_b = malloc(sizeof(int) * (len + 1));
	i = 0;
	data->stack_b[0] = data->stack_a[0];
	while (i < len)
	{
		data->stack_b[i + 1] = aux_array[i];
		i++;
	}
	data->stack_a = shift(data->stack_a);
	free(aux_array);
}
