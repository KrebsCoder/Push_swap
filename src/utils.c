/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:12:16 by lkrebs-l          #+#    #+#             */
/*   Updated: 2022/03/08 03:50:26 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_strdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (FALSE);
			break ;
		}
		i++;
	}
	return (TRUE);
}

int	is_max_int(char *str)
{
	long	atoi;

	atoi = ft_atoi(str);
	if (atoi > MAXINT)
		return (FALSE);
	return (TRUE);
}

int	array_len(int array[])
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	*shift(int array[])
{
	int	*aux_array;
	int	i;
	int	len;

	len = array_len(array);
	aux_array = malloc(sizeof(int) * len);
	ft_memcpy(aux_array, array, len);
	free(array);
	array = malloc(sizeof(int) * (len - 1));
	i = 0;
	while (i < len)
	{
		array[i] = aux_array[i + 1];
		i++;
	}
	free(aux_array);
	return (array);
}
