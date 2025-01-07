/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:17:59 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/06 14:27:38 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(t_stack **a, bool print)
{
    if (!*a || !(*a)->next)
        return ;
    *a = (*a)->next;
    (*a)->prev->prev = *a;
    (*a)->prev->next = (*a)->next;
    if ((*a)->next)
        (*a)->next->prev = (*a)->prev;
    (*a)->next = (*a)->prev;
    (*a)->prev = NULL;
    if (print)
        ft_putstr_fd("sa\n", 1);
}

void ft_sb(t_stack **b, bool print)
{
    ft_sa(b, 0);
    if (print)
        ft_putstr_fd("sb\n", 1);
}

void ft_ss(t_stack **a, t_stack **b, bool print)
{
    ft_sa(a, 0);
    ft_sb(b, 0);
    if (print)
        ft_putstr_fd("ss\n", 1);
}