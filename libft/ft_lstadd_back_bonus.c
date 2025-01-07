/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:05:17 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/06 14:04:00 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		new->prev = NULL;
	}
	else
	{
		last = *lst;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
		new->prev = last;
	}
}
