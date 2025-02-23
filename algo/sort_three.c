/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:04:52 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:20:49 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	low_i_position(t_stack **stack)
{
	t_stack	*tmp;
	int		lowest_index;
	int		lowest_pos;

	tmp = *stack;
	lowest_index = INT_MAX;
	pos(stack);
	lowest_pos = tmp->position;
	while (tmp)
	{
		if (tmp->i < lowest_index)
		{
			lowest_index = tmp->i;
			lowest_pos = tmp->position;
		}
		tmp = tmp->next;
	}
	return (lowest_pos);
}

int	max_index(t_stack *a)
{
	int	index;

	index = a->i;
	while (a)
	{
		if (a->i > index)
			index = a->i;
		a = a->next;
	}
	return (index);
}

void	sort_three_in_stack(t_stack **a)
{
	int	big_index;

	if (check_stack_is_sorted(*a))
		return ;
	big_index = max_index(*a);
	if ((*a)->i == big_index)
		ft_ra(a, 1);
	else if ((*a)->next->i == big_index)
		ft_rra(a, 1);
	if ((*a)->i > (*a)->next->i)
		ft_sa(a, 1);
}
