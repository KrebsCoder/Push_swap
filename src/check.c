/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:47:33 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/12 00:38:14 by lkrebs-l         ###   ########.fr       */
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

int	ft_strdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
		{
			return (FALSE);
			break ;
		}
		i++;
	}
	return (TRUE);
}

int	check_int(char *str)
{
	long	atoi;

	atoi = ft_atoi(str);
	if (atoi > MAXINT || atoi < MININT)
		return (FALSE);
	return (TRUE);
}
