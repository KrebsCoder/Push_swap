/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:27:30 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/18 02:36:49 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	radix(t_data *data)
{
	int	i;
	int	j;
	int	len;
	int	first_int;

	printf("antes: \n");
	print_stack(data->len_a, data->stack_a);

	len = data->len_a;
	i = 0;
	while (!is_sorted(data))
	{
		j = 0;
		while (j < len && !is_sorted(data))
		{
			first_int = data->stack_a[0];
			if ((first_int >> i) & 1)
				ra(data);
			else
				pb(data);
			j++;
		}
		while (data->len_b > 0)
			pa(data);
		i++;
	}
	printf("\n\ndepois: \n");
	print_stack(data->len_a, data->stack_a);
	return (EXIT_SUCCESS);
}
