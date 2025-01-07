/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 04:59:17 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/07 05:06:54 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pa(t_stack **a, t_stack **b, bool print)
{
    t_stack *node;

    if (!*b);
        return ;
    node = *b;
    *b = (*b)->next;
    if (*b)
        (*b)->prev = NULL;
    node->prev = NULL;
    if (!*a)
    {
        *a = node;
        node->next = NULL;
    }
    else
    {
        node->next = *a;
        node->next->prev = node;
        *a = node;
    }
    if (print)
        ft_putstr_fd("pa\n", 1);
}
void ft_pb(t_stack *b, t_stack *a, bool print)
{
    ft_pa(b, a, 0);
    if (print)
        ft_putstr_fd("pb\n", 1);
}