/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:12:16 by lkrebs-l          #+#    #+#             */
/*   Updated: 2022/03/09 03:38:46 by gcosta-d         ###   ########.fr       */
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
	ft_arraycpy(aux_array, array, len);
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

void	*ft_realloc(void *ptr, size_t len)
{
	void	*aux;

	if (!ptr)
		return (malloc(len));
	if (len == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	aux = malloc(len);
	if (!aux)
		return (NULL);
	ft_memcpy(aux, ptr, len);
	free(ptr);
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, aux, len);
	free(aux);
	return (ptr);
}
