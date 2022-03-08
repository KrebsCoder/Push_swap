/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:23:58 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 03:30:50 by lkrebs-l         ###   ########.fr       */
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
}	t_data;

/* ==== rules functions ==== */
void	pa(void);
void	pb(t_data *data);
void	ra(void);
void	rb(void);
void	rr(void);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(void);
void	rra(void);
void	rrb(void);
void	rrr(void);

int		check(int argc, char *argv[]);
int		init(t_data *data, int argc, char *argv[]);
int		ft_strdigit(char *str);
int		is_max_int(char *str);
int		radix(t_data *data);
int		init_sort(t_data *data, int argc, char *argv[]);
int		*shift(int array[]);

#endif
