/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:25:11 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/11 00:25:23 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rb(t_data *data)
{
	int	aux;
	int	i;

	aux = data->stack_b[0];
	i = 0;
	while (i < data->len_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[data->len_b - 1] = aux;
	write(1, "rb\n", 4);
}
