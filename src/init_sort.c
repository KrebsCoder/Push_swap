/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:36:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/17 16:30:11 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init_sort(t_data *data, int argc, char *argv[])
{
	int	exit;

	if (!init(data, argc, argv) || !check(data, argc, argv))
		return (EXIT_FAILURE);
	else
		normalize(data);
	if (data->len_a <= 3)
		exit = small_sort_3(data, 1, 2, 3);
	else if (data->len_a <= 5)
		exit = small_sort_5(data);
	else
		exit = radix(data);
	ft_free(data);
	return (exit);
}
