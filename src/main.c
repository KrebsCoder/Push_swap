/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:04:07 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 03:28:19 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stack(int argc, t_data *data)
{
	for (int i = 0; i < argc - 1; i++)
		printf("%d  %d\n", data->stack_a[i], data->stack_b[i]);
	printf("_  _\n");
	printf("a  b\n");
}

int	main(int argc, char *argv[])
{
	t_data	data;

	return (init_sort(&data, argc, argv));
}
