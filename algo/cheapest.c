/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:43:23 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:17:04 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	abs_value(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

void	best_move_element(t_stack **a, t_stack **b, int costa, int costb)
{
	if (costa < 0 && costb < 0)
		rev_rotate_both(a, b, &costa, &costb);
	else if (costa > 0 && costb > 0)
		rotate_both(a, b, &costa, &costb);
	rotate_a(a, &costa);
	rotate_b(b, &costb);
	ft_pa(a, b, 1);
}

void	move_cheapest(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		cost_a;
	int		cost_b;
	int		cheapest;

	tmp = *b;
	cheapest = INT_MAX;
	while (tmp)
	{
		if (abs_value(tmp->cost_stacka)
			+ abs_value(tmp->cost_stackb) < abs_value(cheapest))
		{
			cheapest = abs_value(tmp->cost_stackb)
				+ abs_value(tmp->cost_stacka);
			cost_a = tmp->cost_stacka;
			cost_b = tmp->cost_stackb;
		}
		tmp = tmp->next;
	}
	best_move_element(a, b, cost_a, cost_b);
}
