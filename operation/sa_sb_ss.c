/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:00:06 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:07:34 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack **a, int x)
{
	t_stack	*node1;
	t_stack	*node2;

	node1 = *a;
	node2 = node1->next;
	if (!node1 || !node2)
		return ;
	node1->next = node2->next;
	node2->next = node1;
	*a = node2;
	if (x)
		ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_stack **b, int x)
{
	ft_sa(b, 0);
	if (x)
		ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_stack **a, t_stack **b, int x)
{
	ft_sa(a, 0);
	ft_sb(b, 0);
	if (x)
		ft_putstr_fd("ss\n", 1);
}
