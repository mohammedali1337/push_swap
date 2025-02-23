/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:59:13 by mgarouj           #+#    #+#             */
/*   Updated: 2025/02/01 05:45:55 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(char *s)
{
	ft_putstr_fd(s, 2);
	exit(1);
}

void	empty_input(int c, char **v)
{
	int	ix;
	int	j;
	int	empty;

	ix = 0;
	while (ix < c)
	{
		j = 0;
		empty = 1;
		while (v[ix][j] != '\0')
		{
			if (v[ix][j] != ' ')
			{
				empty = 0;
				break ;
			}
			j++;
		}
		if (empty)
			print_error("error\n");
		ix++;
	}
}

char	**check_input(int c, char **v)
{
	int		ix;
	char	**jnd;

	ix = 0;
	empty_input(c, v);
	if (c == 2)
		jnd = ft_split(v[1]);
	else
		jnd = joind_argument(c, v);
	if (!jnd)
		exit(1);
	return (jnd);
}
