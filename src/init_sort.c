/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:36:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/12 11:32:16 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init_sort(t_data *data, int argc, char *argv[])
{
	if (!check(argc, argv) || !init(data, argc, argv))
		return (EXIT_FAILURE);
	if (data->len_a <= 3)
	{
		printf("before\n\n");
		print_stack(data->len_a, data->stack_a);
		small_sort_3(data);
		printf("after\n\n");
		print_stack(data->len_a, data->stack_a);
		return (EXIT_SUCCESS);
	}
	else if (argc >= 6)
		return (radix(data));
	return (EXIT_SUCCESS);
}
