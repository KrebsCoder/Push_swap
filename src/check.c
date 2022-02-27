/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:47:33 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/02/27 01:41:37 by gcosta-d         ###   ########.fr       */
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
static int	is_max_int(char *str);

int	check(int argc, char *argv[])
{
	int	i;

	if (argc < 3)
		return (ERROR);
	i = 1;
	while (argv[i])
	{
		if (ft_strdigit(argv[i]) || is_max_int(argv[i]))
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

static int	is_max_int(char *str)
{
	long	atoi;

	atoi = ft_atoi(str);
	if (atoi > MAXINT)
		return (ERROR);
	return (SUCCESS);
}
