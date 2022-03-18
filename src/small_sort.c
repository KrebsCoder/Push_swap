/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:44:05 by lkrebs-l          #+#    #+#             */
/*   Updated: 2022/03/18 03:09:37 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	find_min_int(t_data *data);
static void	push_b(t_data *data, int index, int mid_index, int last_index);
static void	sort_b(t_data *data);

int	small_sort_3(t_data *data, int first, int mid, int last)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (data->stack_a[0] == first && data->stack_a[1] == mid)
			return (EXIT_SUCCESS);
		else if (data->stack_a[0] == last || (data->stack_a[0] == mid
				&& data->stack_a [1] == last))
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
	int	len;

	len = data->len_a;
	i = 0;
	while (i < 2)
	{
		index = find_min_int(data);
		if (i == 0 && len == 5)
			push_b(data, index, 2, 4);
		else if (len == 4)
			push_b(data, index, 1, 3);
		else if (len == 3)
			small_sort_3(data, 2, 3, 4);
		i++;
		len--;
	}
	sort_b(data);
	small_sort_3(data, 3, 4, 5);
	while (data->len_b > 0)
		pa(data);
	return (EXIT_SUCCESS);
}

static int	find_min_int(t_data *data)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < data->len_a)
	{
		if (data->stack_a[index] > data->stack_a[i])
			index = i;
		i++;
	}
	return (index);
}

static void	push_b(t_data *data, int index, int mid_index, int last_index)
{
	int	i;

	i = 0;
	while (i < index + 1)
	{
		if (index <= mid_index)
		{
			if (index == 0)
				break ;
			ra(data);
			i++;
		}
		else
		{
			rra(data);
			if (index == last_index)
				break ;
			i++;
		}
		i++;
	}
	pb(data);
}

static void	sort_b(t_data *data)
{
	if (data->len_b > 1 && data->stack_b[0] < data->stack_b[1])
		sb(data);
}
