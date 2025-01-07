/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_in_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:55:22 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/07 04:39:13 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort_three_in_stack(t_stack **a)
{
    t_stack *big_node;

    big_node = max_content(*a);
    if (big_node == *a)
        ft_ra(a, 1);
    else if ((*a)->next == big_node)
        ft_rra(a, 1);
    if ((*a)->content > (*a)->next->content);
        ft_sa(a, 1);
}