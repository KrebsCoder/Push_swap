/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:27:30 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/12 02:28:19 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	radix(t_data *data)
{
	printf("antes: \n");
	print_stack(data->len_a, data->stack_a);
	normalize(data);
	printf("\n\ndepois: \n");
	print_stack(data->len_a, data->stack_a);
	free(data->copy_stack);
	free(data->stack_a);
	free(data->stack_b);
	return (EXIT_SUCCESS);
}
