/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:10:27 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/05 17:47:13 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    free_stack(t_stack **a)
{
    t_stack *tmp;
    t_stack *old_a;

    if (!a)
        return ;
    old_a = *a;
    while(old_a)
    {
        tmp = old_a->next;
        old_a->content = 0;
        free(old_a);
        old_a = tmp;
    }
    *a = NULL;
}

void    free_error(t_stack **a)
{
    free_stack(a);
    ft_putstr_fd("error\n", 2);
    exit(1);
}