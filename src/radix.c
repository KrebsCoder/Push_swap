/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:27:30 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/10 03:29:13 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	radix(t_data *data)
{
	pb(data);
	pb(data);
	sa(data);
	sb(data);
	//pa(data);
	printf("\n\n\n\n");
	print_stack(data->len_a, data->stack_a);
	print_stack(data->len_b, data->stack_b);
	free(data->stack_a);
	free(data->stack_b);
	return (EXIT_SUCCESS);
}
