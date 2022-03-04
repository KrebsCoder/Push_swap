/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:04:07 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/04 17:21:17 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	if (check(argc, argv) || init(&data, argc, argv))
		return (ERROR);
	// printa stacks na tela
	for (int i = 0; i < argc; i++)
		printf("%d  %d\n", data.stack_a[i], data.stack_b[i]);
	printf("_  _\n");
	printf("a  b\n");
	free(data.stack_a);
	return (0);
}
