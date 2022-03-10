/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:04:07 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/10 03:27:34 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stack(int argc, int array[])
{
	for (int i = 0; i < argc; i++)
		printf("%d\n", array[i]);
	printf("-\n");
	printf("x\n\n");
}


int	main(int argc, char *argv[])
{
	t_data	data;

	return (init_sort(&data, argc, argv));
}
