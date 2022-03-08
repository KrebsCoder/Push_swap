/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:37:26 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 02:46:44 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init(t_data *data, int argc, char *argv[])
{
	int	i;

	data->stack_a = (int *)malloc(argc * sizeof(int));
	if (!data->stack_a)
		return (FALSE);
	i = 0;
	while (i < argc)
	{
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (TRUE);
}
