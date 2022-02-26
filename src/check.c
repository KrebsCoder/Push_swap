/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:47:33 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/02/26 23:47:39 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:46:58 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/02/26 23:29:25 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_strdigit(char *str);

int	check(t_data *data, int argc, char *argv[])
{
	int	i;
	if (argc < 3)
		return (0);
	data->qnt_int = argc;

	i = 1;
	while (argv[i])
	{

		if (ft_strdigit(argv[i]) == 0)
		{
			write(2, "Error\n", 6);
			return (ERROR);
		}
		i++;
	}
	return (SUCCESS);
}

static int	ft_strdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (ERROR);
			break ;
		}
		i++;
	}
	return (SUCCESS);
}
