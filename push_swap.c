/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:57:31 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/07 04:40:38 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int c, char **v)
{
    t_stack  *a;
    t_stack  *b;

    a = NULL;
    b = NULL;
    if (c == 1 || (c == 2 && !v[1][0]))
        return (1);
    else if (c == 2)
        v = ft_split(v[1], 32);
    init_stack_a(&a, &v[1]);
    if (!check_stack_is_sorted(a))
    {
        if (ft_lstsize(a) == 2)
            ft_sa(&a, 1);
        else if (ft_lstsize(a) == 3)
            sort_three_in_stack(&a);
        else
            sort_big_stacks(&a, &b);
    }
    free_stack(&a);
    return (0);
}