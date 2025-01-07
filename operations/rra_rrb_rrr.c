/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:16:16 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/07 04:36:20 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rra(t_stack **a, bool print)
{
    t_stack *last;
    if (!*a || !(*a)->next)
        return ;
    last = ft_lstlast(*a);
    last->prev->next = NULL;
    last->next = *a;
    last->prev = NULL;
    *a = last;
    last->next->prev = last;
    if (print)
        ft_putstr_fd("rra\n", 1);
}
void ft_rrb(t_stack *b, bool print)
{
    ft_rra(b, 0);
    if (print)
        ft_putstr_fd("rrb\n", 1);
}
void ft_rrr(t_stack *a, t_stack *b, bool print)
{
    ft_rra(a, 0);
    ft_rrb(b, 0);
    if (print)
        ft_putstr_fd("rrr\n", 1);
}