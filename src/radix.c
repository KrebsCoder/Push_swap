/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:27:30 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/12 11:08:02 by lkrebs-l         ###   ########.fr       */
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
	ft_free(data);
	return (EXIT_SUCCESS);
}
