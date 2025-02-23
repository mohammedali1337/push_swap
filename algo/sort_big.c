/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:17:57 by mgarouj           #+#    #+#             */
/*   Updated: 2025/02/01 06:20:38 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb_and_sort_a(t_stack **a, t_stack **b)
{
	int	len;
	int	pushed;
	int	i;

	len = ft_lstsize(*a);
	pushed = 0;
	i = 0;
	while (len > 6 && i < len && pushed < len / 2)
	{
		if ((*a)->i <= len / 2)
		{
			ft_pb(a, b, 1);
			pushed++;
		}
		else
			ft_ra(a, 1);
		i++;
	}
	while (len - pushed > 3)
	{
		ft_pb(a, b, 1);
		pushed++;
	}
}

void	move_lowest_to_top(t_stack **a)
{
	int	lowest_pos;
	int	stack_size;

	stack_size = ft_lstsize(*a);
	lowest_pos = low_i_position(a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			ft_rra(a, 1);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ft_ra(a, 1);
			lowest_pos--;
		}
	}
}

void	sort_big_stack(t_stack **a, t_stack **b)
{
	pb_and_sort_a(a, b);
	sort_three_in_stack(a);
	while (*b)
	{
		init_target_position(a, b);
		init_cost(a, b);
		move_cheapest(a, b);
	}
	if (!check_stack_is_sorted(*a))
		move_lowest_to_top(a);
}
