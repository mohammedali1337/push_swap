/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_in_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:21:24 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:19:27 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pos(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}

int	get_target(t_stack **a, int bi, int target_i, int target_position)
{
	t_stack	*tmp_a;

	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->i > bi && tmp_a->i < target_i)
		{
			target_i = tmp_a->i;
			target_position = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
	if (target_i != INT_MAX)
		return (target_position);
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->i < target_i)
		{
			target_i = tmp_a->i;
			target_position = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
	return (target_position);
}

void	init_target_position(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		target_position;

	tmp = *b;
	pos(a);
	pos(b);
	target_position = 0;
	while (tmp)
	{
		target_position = get_target(a, tmp->i, INT_MAX, target_position);
		tmp->target_position = target_position;
		tmp = tmp->next;
	}
}
