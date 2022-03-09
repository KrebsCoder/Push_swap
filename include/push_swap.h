/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:23:58 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/09 03:20:33 by gcosta-d         ###   ########.fr       */
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

/**
 * @brief Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty
 */
void	pa(void);

/**
 * @brief Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
 */
void	pb(t_data *data);

/**
 * @brief (rotate a) Shift up all elements of stack a by 1.
The first element becomes the last one.
 */
void	ra(void);

/**
 * @brief (rotate b) Shift up all elements of stack b by 1.
The first element becomes the last one.
 */
void	rb(void);

/**
 * @brief ra and rb at the same time.
 */
void	rr(void);

/**
 * @brief Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements
 */
void	sa(t_data *data);

/**
 * @brief Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements
 */
void	sb(t_data *data);

/**
 * @brief sa and sb at the same time.
 */
void	ss(void);

/**
 * @brief (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
 */
void	rra(void);

/**
 * @brief (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.

 */
void	rrb(void);

/**
 * @brief rra and rrb at the same time.
 */
void	rrr(void);

/* functions */

/**
 * @brief Checks if input is valid
 * @param argc is checked if is lower than 2, if so, returns 0
 * @param argv is checked if values are valid
 * @return 0 or 1
 */
int	check(int argc, char *argv[]);

/**
 * @brief Iniciates the stack a
 * @param data Is used to malloc the stack a
 * @param argc Is used to store int quantity
 * @param argv Is used to convert string to int using ft_atoi
 * @return 0 or 1
 */
int	init(t_data *data, int argc, char *argv[]);

/**
 * @brief Checks if str is valid
 * @param str Is used to check if str if between 0 and 9 and if is negative
 * @return 0 or 1
 */
int	ft_strdigit(char *str);

/**
 * @brief Checks if the numbers are above the max int
 * @param str Is converted to int with ft_atoi and checked if is above max int
 * @return 0 or 1
 */
int	is_max_int(char *str);

int		array_len(int array[]);
int		*shift(int array[]);
void	*ft_realloc(void *ptr, size_t len);
int		radix(t_data *data);
int		init_sort(t_data *data, int argc, char *argv[]);

/* temporary */
void	print_stack(int argc, t_data *data);

#endif
