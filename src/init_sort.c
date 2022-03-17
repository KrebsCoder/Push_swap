/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:36:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/16 23:31:33 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init_sort(t_data *data, int argc, char *argv[])
{
	int	exit;
	if (!check(argc, argv) || !init(data, argc, argv))
		return (EXIT_FAILURE);
	else
		normalize(data);
	if (data->len_a <= 3)
	{
		exit = small_sort_3(data, 1, 2, 3);
		ft_free(data);
		return (exit);
	}
	else if (data->len_a <= 5)
		return (small_sort_5(data));
	else
		return (radix(data));
}
