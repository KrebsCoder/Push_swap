/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:12:16 by lkrebs-l          #+#    #+#             */
/*   Updated: 2022/03/10 16:02:09 by lkrebs-l         ###   ########.fr       */
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

int	check_int(char *str)
{
	long	atoi;

	atoi = ft_atoi(str);
	if (atoi > MAXINT || atoi < MININT)
		return (FALSE);
	return (TRUE);
}

int	*shift(int array[], int len)
{
	int	*aux_array;
	int	i;

	aux_array = malloc(len * sizeof(int));
	ft_arraycpy(aux_array, array, len);
	free(array);
	array = malloc((len - 1) * sizeof(int));
	i = 0;
	while (i < len - 1)
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
	aux = malloc(len * sizeof(int));
	if (!aux)
		return (NULL);
	ft_arraycpy(aux, ptr, len);
	free(ptr);
	ptr = malloc((len + 1) * sizeof(int));
	if (!ptr)
		return (NULL);
	ft_arraycpy(ptr, aux, len);
	free(aux);
	return (ptr);
}
