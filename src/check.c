/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:47:33 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/18 23:37:07 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Quando passamos apenas um numero no cli ele retorna 1 no echo $? */
int	check(t_data *data, int argc, char *argv[])
{
	if (argc < 2)
		return (FALSE);
	if (!ft_strdigit(argv))
	{
		write(2, "Error\n", 6);
		return (FALSE);
	}
	if (!check_int(data, argc, argv) || check_duplicate(data))
	{
		write(2, "Error\n", 6);
		return (FALSE);
	}
	else if (is_sorted(data))
		return (FALSE);
	return (TRUE);
}

int	ft_strdigit(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != '-')
			{
				return (FALSE);
				break ;
			}
			j++;
		}
		i++;
	}
	return (TRUE);
}

int	check_int(t_data *data, int argc, char *argv[])
{
	long	atoi;
	int		i;

	i = 0;
	while (i < argc)
	{
		atoi = ft_atoi(argv[i + 1]);
		if (atoi > MAXINT || atoi < MININT)
			return (FALSE);
		data->stack_a[i] = atoi;
		i++;
	}
	return (TRUE);
}

int	check_duplicate(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->len_a)
	{
		j = i + 1;
		while (j < data->len_a)
		{
			if (data->stack_a[i] == data->stack_a[j])
				return (TRUE);
			j++;
		}
		i++;
	}
	return (FALSE);
}

int	is_sorted(t_data *data)
{
	int	i;
	int	next;
	int	current;

	i = 0;
	while (i < data->len_a)
	{
		current = data->stack_a[i];
		next = i + 1;
		while (next < data->len_a)
		{
			if (data->stack_a[next] < current)
				return (FALSE);
			next++;
		}
		i++;
	}
	return (TRUE);
}
