/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:27:30 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/21 22:33:59 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	radix(t_data *data)
{
	int	i;
	int	j;
	int	len;

	len = data->len_a;
	i = 0;
	while (!is_sorted(data))
	{
		j = 0;
		while (j < len && !is_sorted(data))
		{
			if ((data->stack_a[0] >> i) & 1)
				ra(data);
			else
				pb(data);
			j++;
		}
		while (data->len_b > 0)
			pa(data);
		i++;
	}
	return (EXIT_SUCCESS);
}
