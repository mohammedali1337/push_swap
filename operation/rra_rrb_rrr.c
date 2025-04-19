/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:13:00 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:06:41 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack **a, int x)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*a || !a)
		return ;
	last = *a;
	before_last = NULL;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *a;
	*a = last;
	if (x)
		ft_putstr_fd("rra\n", 1);
}

void	ft_rrb(t_stack **b, int x)
{
	if (!*b || !b)
		return ;
	ft_rra(b, 0);
	if (x)
		ft_putstr_fd("rrb\n", 1);
}

void	ft_rrr(t_stack **a, t_stack **b, int x)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	if (x)
		ft_putstr_fd("rrr\n", 1);
}

void	rev_rotate_both(t_stack **a, t_stack **b, int *c_a, int *c_b)
{
	while (*c_a < 0 && *c_b < 0)
	{
		(*c_a)++;
		(*c_b)++;
		ft_rrr(a, b, 1);
	}
}

void	rotate_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ft_rb(b, 1);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			ft_rrb(b, 1);
			(*cost)++;
		}
	}
}
