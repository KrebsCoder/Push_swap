/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:47:33 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/17 17:41:12 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Quando passamos um numero no cli ele retorna 1 no echo $? */
int	check(t_data *data, int argc, char *argv[])
{
	int	i;

	if (argc < 3)
		return (FALSE);
	i = 0;
	while (argv[++i])
	{
		if (!ft_strdigit(argv[i]) || !check_int(argv[i]))
		{
			write(2, "Error\n", 6);
			return (FALSE);
		}
	}
	if (check_duplicate(data))
	{
		write(2, "Error\n", 6);
		ft_free(data);
		return (FALSE);
	}
	else if (is_sorted(data))
	{
		ft_free(data);
		return (FALSE);
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
	int	j;
	int	aux;

	i = 0;
	while (i < data->len_a)
	{
		aux = data->stack_a[i];
		j = i + 1;
		while (j < data->len_a)
		{
			if (data->stack_a[j] < aux)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

