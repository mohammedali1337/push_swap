/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:32:39 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/06 20:11:55 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_ra(t_stack **a, bool print)
{
    t_stack *last_node;
    
    if (!*a || !(*a)->next)
        return ;
    last_node = ft_lstlast(*a);
    last_node->next = *a;
    *a = (*a)->next;
    (*a)->prev = NULL;
    last_node->next->prev = last_node;
    last_node->next->next = NULL;
    if (print)
        ft_putstr_fd("ra\n", 1);
}

void ft_rb(t_stack **b, bool print)
{
    ft_ra(b, 0);
    if (print)
        ft_putstr_fd("rb\n", 1);
}

void ft_rr(t_stack **a, t_stack **b, bool print)
{
    ft_ra(a, 0);
    ft_rb(b, 0);
    if (print)
        ft_putstr_fd("rr\n", 1);
}