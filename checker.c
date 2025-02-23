/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:06:49 by mgarouj           #+#    #+#             */
/*   Updated: 2025/02/01 06:09:18 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line/get_next_line.h"

void	error(t_stack **a, t_stack**b)
{
	free_stack(a);
	free_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}

static int	ft_strcmp(char *str_1, char *str_2)
{
	int	i;

	i = 0;
	while (str_1[i] && str_2[i])
	{
		if (str_1[i] != str_2[i])
			return (str_1[i] - str_2[i]);
		i++;
	}
	return (str_1[i] - str_2[i]);
}

void	execute_instruction(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		ft_sa(a, 0);
	else if (!ft_strcmp(line, "sb\n"))
		ft_sb(b, 0);
	else if (!ft_strcmp(line, "ss\n"))
		ft_ss(a, b, 0);
	else if (!ft_strcmp(line, "pa\n"))
		ft_pa(a, b, 0);
	else if (!ft_strcmp(line, "pb\n"))
		ft_pb(a, b, 0);
	else if (!ft_strcmp(line, "ra\n"))
		ft_ra(a, 0);
	else if (!ft_strcmp(line, "rb\n"))
		ft_rb(b, 0);
	else if (!ft_strcmp(line, "rr\n"))
		ft_rr(a, b, 0);
	else if (!ft_strcmp(line, "rra\n"))
		ft_rra(a, 0);
	else if (!ft_strcmp(line, "rrb\n"))
		ft_rrb(b, 0);
	else if (!ft_strcmp(line, "rrr\n"))
		ft_rrr(a, b, 0);
	else
		error(a, b);
}

void	print_check(t_stack *a, int len)
{
	if (check_stack_is_sorted(a) && ft_lstsize(a) == len)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int c, char **v)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;
	char	**ptr;
	int		len;

	a = NULL;
	b = NULL;
	if (c >= 2)
	{
		ptr = check_input(c, v);
		creat_stack_a(&a, ptr);
		len = ft_lstsize(a);
		line = get_next_line(0);
		while (line)
		{
			execute_instruction(&a, &b, line);
			free(line);
			line = get_next_line(0);
		}
		print_check(a, len);
		free_ptr(ptr);
	}
	free_stack(&a);
	free_stack(&b);
}
