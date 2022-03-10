/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:26:20 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 21:25:30 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_data *data)
{
	int	temp;

	if (data->len_a <= 1)
		return ;
	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	write(1, "sa\n", 3);
}
