/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:43:21 by mgarouj           #+#    #+#             */
/*   Updated: 2025/02/01 06:08:51 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int c, char **v)
{
	int		len;
	char	**ptr;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (!(c < 2 || (c == 2 && !v[1][0])))
	{
		ptr = check_input(c, v);
		creat_stack_a(&a, ptr);
		len = ft_lstsize(a);
		init_index(a, len + 1);
		sort_stack(&a, &b, len);
		free_ptr(ptr);
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}
