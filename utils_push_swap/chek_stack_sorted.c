/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chek_stack_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:02:58 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/05 18:05:28 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool    check_stack_is_sorted(t_stack *a)
{
    if (!a)
        return (1);
    while (a->next)
    {
        if (a->content > a->next->content)
            return (0);
        a = a->next;
    }
    return (1);
}