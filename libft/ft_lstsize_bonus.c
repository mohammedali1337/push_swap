/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:10:45 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/06 14:13:59 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (count);
	while (lst != NULL)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
