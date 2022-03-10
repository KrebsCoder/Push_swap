/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:04:07 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 21:34:38 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stack(int argc, int array[])
{
	for (int i = 0; i < argc - 1; i++)
		printf("%d\n", array[i]);
	printf("_\n");
	printf("x\n");
}


int	main(int argc, char *argv[])
{
	t_data	data;

	return (init_sort(&data, argc, argv));
}
