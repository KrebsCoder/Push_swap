/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:23:58 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 01:48:02 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

# include "../libft/libft.h"
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define MAXINT 2147483647
# define MININT -2147483648

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	qnt_int;
} t_data;


/* ==== rules functions ==== */
void	pa(void);
void	pb(void);
void	ra(void);
void	rb(void);
void	rr(void);
void	sa(t_data *data);
void	sb(void);
void	ss(void);
void	rra(void);
void	rrb(void);
void	rrr(void);

int	check(int argc, char *argv[]);
int	init(t_data *data, int argc, char *argv[]);
int	ft_strdigit(char *str);
int	is_max_int(char *str);

#endif
