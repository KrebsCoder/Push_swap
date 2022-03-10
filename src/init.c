/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:37:26 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/10 02:42:59 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init(t_data *data, int argc, char *argv[])
{
	int	i;

	data->stack_b = malloc(1 * sizeof(int));
	data->stack_a = malloc(argc * sizeof(int));
	data->len_a = argc - 1;
	data->len_b = 0;
	if (!data->stack_a || !data->stack_b)
		return (FALSE);
	i = 0;
	while (i < argc)
	{
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (TRUE);
}
