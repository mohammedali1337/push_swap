/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 04:41:00 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/07 06:21:31 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_big_stack(t_stack **a, t_stack **b)
{
    int len_stack_a;
    
    len_stack_a = ft_lstsize(*a);
    if (len_stack_a-- > 3 && !check_stack_is_sorted(*a))
        ft_pb(b, a, 1);
    if (len_stack_a-- > 3 && !check_stack_is_sorted(*a))
        ft_pb(b, a, 1);
    while (len_stack_a-- > 3 && !check_stack_is_sorted(*a))
    {
        initialize_node_a(*a, *b);
    }
    sort_three_in_stack(a);
}