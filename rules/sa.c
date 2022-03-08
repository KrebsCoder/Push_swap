/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:26:20 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 01:50:18 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_data *data)
{
	int	temp;
	int	len;

	len = data->qnt_int;
	printf("sizeof array: %d\n", len);

	if (len <= 1)
		return ;
	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	write(1, "sa\n", 3);

	/* for temporario */
	for (int i = 0; i < len; i++)
		printf("%d", data->stack_a[i]);
	printf("\n");
}

