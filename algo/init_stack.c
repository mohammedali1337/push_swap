/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:29:41 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:18:38 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_cost(t_stack **a, t_stack **b)
{
	int		len_a;
	int		len_b;
	t_stack	*tmpa;
	t_stack	*tmpb;

	tmpa = *a;
	tmpb = *b;
	len_a = ft_lstsize(tmpa);
	len_b = ft_lstsize(tmpb);
	while (tmpb)
	{
		tmpb->cost_stackb = tmpb->position;
		if (tmpb->position > len_b / 2)
			tmpb->cost_stackb = (len_b - tmpb->position) * -1;
		tmpb->cost_stacka = tmpb->target_position;
		if (tmpb->target_position > len_a / 2)
			tmpb->cost_stacka = (len_a - tmpb->target_position) * -1;
		tmpb = tmpb->next;
	}
}

void	creat_stack_a(t_stack **a, char **v)
{
	long	n;
	int		i;

	i = 1;
	while (v[i])
	{
		if (error_syntax(v[i]))
			free_error(a);
		n = ft_super_atoi_man(v[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_error(a);
		if (check_duplicte_error(*a, (int)n))
			free_error(a);
		ft_lstadd_back(a, ft_lstnew((int)n));
		i++;
	}
}

void	init_index(t_stack *stack, int len)
{
	t_stack	*ptr;
	t_stack	*highest;
	int		value;

	while (--len > 0)
	{
		ptr = stack;
		value = INT_MIN;
		highest = NULL;
		while (ptr)
		{
			if (ptr->content == INT_MIN && ptr->i == 0)
				ptr->i = 1;
			if (ptr->content > value && ptr->i == 0)
			{
				value = ptr->content;
				highest = ptr;
				ptr = stack;
			}
			else
				ptr = ptr->next;
		}
		if (highest != NULL)
			highest->i = len;
	}
}

int	check_stack_is_sorted(t_stack *a)
{
	t_stack	*tmp;

	if (!a)
		return (1);
	tmp = a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort_stack(t_stack **a, t_stack **b, int len)
{
	if (!check_stack_is_sorted(*a))
	{
		if (len == 2)
			ft_sa(a, 1);
		else if (len == 3)
			sort_three_in_stack(a);
		else
			sort_big_stack(a, b);
	}
}
