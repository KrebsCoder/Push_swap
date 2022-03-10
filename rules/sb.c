/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:26:08 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 21:26:03 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sb(t_data *data)
{
	int	temp;

	if (data->len_b <= 1)
		return ;
	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	write(1, "sb\n", 3);
}
