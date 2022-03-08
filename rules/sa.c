/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:26:20 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 01:09:19 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(void)
{
	int arr1[4] = {8, 4, 7, 2};
	int temp;

	temp = arr1[0];
	arr1[0] = arr1[1];
	arr1[1] = temp;

	int len = sizeof(arr1)/sizeof(arr1[0]);
	for (int i = 0; i < len; i++)
		printf("%d", arr1[i]);
	printf("\n");
}

