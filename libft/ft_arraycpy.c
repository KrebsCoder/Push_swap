/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraycpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:27 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 02:53:08 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Arraycpy copies n integers to another memory area
 */

void	ft_arraycpy(int dest[], int src[], size_t len)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return ;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
}
