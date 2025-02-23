/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:23:07 by mgarouj           #+#    #+#             */
/*   Updated: 2025/02/23 02:43:13 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **source, t_stack **dest)
{
	t_stack	*tmp;

	
	if (*source == NULL)
		return ;
	tmp = (*source)->next;
	(*source)->next = *dest;
	*dest = *source;
	*source = tmp;
}

void	ft_pa(t_stack **a, t_stack **b, int x)
{
	push(b, a);
	if (x)
		ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack **a, t_stack **b, int x)
{
	push(a, b);
	if (x)
		ft_putstr_fd("pb\n", 1);
}
