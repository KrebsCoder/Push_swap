/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:44:05 by lkrebs-l          #+#    #+#             */
/*   Updated: 2022/03/12 11:29:44 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort_3(t_data *data)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (data->stack_a[0] == 1 && data->stack_a[1] == 2)
			return ;
		else if (data->stack_a[0] == 3 || (data->stack_a[0] == 2
			&& data->stack_a [1] == 3))
			ra(data);
		else
			sa(data);
		i++;
	}
}
