/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:06:45 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:05:47 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack **a, int x)
{
	t_stack	*tmp;
	t_stack	*last_node;

	if (!*a || !a)
		return ;
	last_node = ft_lstlast(*a);
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	last_node->next = tmp;
	if (x)
		ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_stack **b, int x)
{
	if (!*b || !b)
		return ;
	ft_ra(b, 0);
	if (x)
		ft_putstr_fd("rb\n", 1);
}

void	ft_rr(t_stack **a, t_stack **b, int x)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	if (x)
		ft_putstr_fd("rr\n", 1);
}

void	rotate_both(t_stack **a, t_stack **b, int *c_a, int *c_b)
{
	while (*c_a > 0 && *c_b > 0)
	{
		(*c_a)--;
		(*c_b)--;
		ft_rr(a, b, 1);
	}
}

void	rotate_a(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ft_ra(a, 1);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			ft_rra(a, 1);
			(*cost)++;
		}
	}
}
