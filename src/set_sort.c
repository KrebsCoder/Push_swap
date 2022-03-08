/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:36:40 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 02:44:34 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	set_sort(t_data *data, int argc, char *argv[])
{
	if (argc >= 6)
		return (radix(data));
	return (EXIT_SUCCESS);
}