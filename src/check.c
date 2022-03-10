/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:47:33 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 21:24:12 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check(int argc, char *argv[])
{
	int	i;

	if (argc < 3)
		return (FALSE);
	i = 1;
	while (argv[i])
	{
		if (!ft_strdigit(argv[i]) || !check_int(argv[i]))
		{
			write(2, "Error\n", 6);
			return (FALSE);
		}
		i++;
	}
	return (TRUE);
}
