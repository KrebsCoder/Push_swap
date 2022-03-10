/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:24:59 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/11 00:25:15 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_data *data)
{
	int	aux;
	int	i;

	aux = data->stack_a[0];
	i = 0;
	while (i < data->len_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[data->len_a - 1] = aux;
	write(1, "ra\n", 4);
}
