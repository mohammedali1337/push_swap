/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:07:51 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/05 17:58:55 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void init_stack_a(t_stack **a, char **v)
{
    long    n;
    int     i;

    i = 0;
    while (v[i])
    {
        if (error_syntax(v[i]))
            free_error(a);
        n = ft_super_atoi_man(v[i]);
        if (n > INT_MAX || n < INT_MIN)
            free_error(a);
        if (check_duplicte_error(*a, (int )n))
            free_error(a);
        ft_lstadd_back(a, ft_lstnew((int )n));
        i++;
    }
}
