/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:23:58 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/11 23:34:28 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define MAXINT 2147483647
# define MININT -2147483648

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;
	int	len_b;
	int	qnt_int;
	int	*copy_stack;
}	t_data;

/* ==== rules functions ==== */

/**
 * @brief Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty
 */
void	pa(t_data *data);

/**
 * @brief Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
 */
void	pb(t_data *data);

/**
 * @brief (rotate a) Shift up all elements of stack a by 1.
The first element becomes the last one.
 */
void	ra(t_data *data);

/**
 * @brief (rotate b) Shift up all elements of stack b by 1.
The first element becomes the last one.
 */
void	rb(t_data *data);

/**
 * @brief ra and rb at the same time.
 */
void	rr(t_data *data);

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
void	ss(t_data *data);

/**
 * @brief (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
 */
void	rra(t_data *data);

/**
 * @brief (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.

 */
void	rrb(t_data *data);

/**
 * @brief rra and rrb at the same time.
 */
void	rrr(t_data *data);

/* functions */

/**
 * @brief Checks if input is valid
 * @param argc is checked if is lower than 2, if so, returns 0
 * @param argv is checked if values are valid
 * @return 0 or 1
 */
int		check(int argc, char *argv[]);

/**
 * @brief Iniciates the stack a
 * @param data Is used to malloc the stack a
 * @param argc Is used to store int quantity
 * @param argv Is used to convert string to int using ft_atoi
 * @return 0 or 1
 */
int		init(t_data *data, int argc, char *argv[]);

/**
 * @brief Checks if str is valid
 * @param str Is used to check if str if between 0 and 9 and if is negative
 * @return 0 or 1
 */
int		ft_strdigit(char *str);

/**
 * @brief Checks if the numbers are above the max int
 * @param str Is converted to int with ft_atoi and checked if is above max int
 * @return 0 or 1
 */
int		check_int(char *str);

/**
 * @brief Removes the first index from an array
 * @param array to be removed
 * @param len len of the stack
 * @return a new array with the first index removed
 */
int		*shift(int array[], int len);

/**
 * @brief Works similarly with realloc function but allocs one extra byte
 * @param ptr variable to be realloced
 * @param len len of the stack
 * @return a new array with one extra byte
 */
void	*ft_realloc(void *ptr, size_t len);

/**
 * @brief This function simulates the radix sorting algorithm
 * @param data struct to be used
 * @return 0 or 1
 */
int		radix(t_data *data);

/**
 * @brief checks if argv is valid and initiates the stacks and both its
 * length counters
 * @param data struct to be used
 * @param argc sends argc to check and init functions
 * @param argv sends argv to init function
 * @return 0 or 1
 */
int		init_sort(t_data *data, int argc, char *argv[]);

void	bubble_sort(t_data *data);
void	normalize(t_data *data);
int		check_duplicate(t_data *data);
/* temporary */
void	print_stack(int argc, int array[]);

#endif
