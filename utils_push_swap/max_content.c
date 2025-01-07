/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:49:16 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/06 19:54:06 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *max_content(t_stack *a)
{
    long max;
    t_stack *big_node;
    
    if (!a)
        return (NULL);
    max = a->content;
    big_node = a;
    while (a)
    {
        if (a->content > max)
        {
            max = a->content;
            big_node = a;
        }
        a = a->next;
    }
    return (big_node);
    
}