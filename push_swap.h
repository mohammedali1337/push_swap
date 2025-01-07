/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:47:53 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/07 06:23:39 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

// operations

void ft_sa(t_stack **a, bool print);
void ft_sb(t_stack **b, bool print);
void ft_ss(t_stack **a, t_stack **b, bool print);

void ft_ra(t_stack **a, bool print);
void ft_rb(t_stack **b, bool print);
void ft_rr(t_stack **a, t_stack **b, bool print);

void ft_rra(t_stack **a, bool print);
void ft_rrb(t_stack *b, bool print);
void ft_rrr(t_stack *a, t_stack *b, bool print);

void ft_pa(t_stack **a, t_stack **b, bool print);
void ft_pb(t_stack **b, t_stack **a, bool print);

// handle eroors

int error_syntax(char *str);
void    free_error(t_stack **a);
int check_duplicte_error(t_stack *a, int x);


// stack utils


void init_stack_a(t_stack **a, char **v);
bool    check_stack_is_sorted(t_stack *a);
void    sort_three_in_stack(t_stack **a);
t_stack *max_content(t_stack *a);


// --------
void initialize_node_a(t_stack *a, t_stack *b);


#endif