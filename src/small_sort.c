/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:44:05 by lkrebs-l          #+#    #+#             */
/*   Updated: 2022/03/14 04:06:55 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	small_sort_3(t_data *data)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (data->stack_a[0] == 0 && data->stack_a[1] == 1)
			return (EXIT_SUCCESS);
		else if (data->stack_a[0] == 2 || (data->stack_a[0] == 1
			&& data->stack_a [1] == 2))
			ra(data);
		else
			sa(data);
		i++;
	}
	return (EXIT_SUCCESS);
}

int	small_sort_5(t_data *data)
{
	int	index;
	int	i;

	print_stack(data->len_a, data->stack_a);

	i = 1;
	index = 0;
	while (i <= data->len_a)
	{
		if (data->stack_a[index] < data->stack_a[i])
			index = i;
		i++;
	}
	if (index == 0)
		pb(data);
	else if (index == 1)
	{
		ra(data);
		pb(data);
	}
	else if (index == 2)
	{
		ra(data);
		ra(data);
		pb(data);
	}
	else if (index == 3)
	{
		rra(data);
		rra(data);
		pb(data);
	}
	else if (index == 4)
	{
		rra(data);
		pb(data);
	}
	printf("Maior indice: %d\n", index);
	print_stack(data->len_a, data->stack_a);
	print_stack(data->len_b, data->stack_b);
	return (EXIT_SUCCESS);
}
