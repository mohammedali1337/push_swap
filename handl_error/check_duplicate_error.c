/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate_error.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:29:39 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/05 17:46:45 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_duplicte_error(t_stack *a, int x)
{
    if (!a)
        return (0);
    while (a)
    {
        if (a->content == x)
            return(1);
        a = a->next;
    }
    return (0);
    
}