/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:41:46 by mgarouj           #+#    #+#             */
/*   Updated: 2025/02/01 06:04:47 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack
{
	int				cost_stacka;
	int				cost_stackb;
	int				target_position;
	int				content;
	int				position;
	int				i;
	struct s_stack	*next;
}	t_stack;

char	**ft_split(char const *s);
void	ft_lstadd_back(t_stack **lst, t_stack *new_node);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int content);
int		ft_lstsize(t_stack *lst);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
long	ft_super_atoi_man(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	ft_pb(t_stack **a, t_stack **b, int x);
void	ft_pa(t_stack **a, t_stack **b, int x);
void	ft_sa(t_stack **a, int x);
void	ft_sb(t_stack **b, int x);
void	ft_ss(t_stack **a, t_stack **b, int x);
void	ft_ra(t_stack **a, int x);
void	ft_rb(t_stack **b, int x);
void	ft_rr(t_stack **a, t_stack **b, int x);
void	ft_rra(t_stack **a, int x);
void	ft_rrb(t_stack **b, int x);
void	ft_rrr(t_stack **a, t_stack **b, int x);
void	sort_three_in_stack(t_stack **a);
void	sort_big_stack(t_stack **a, t_stack **b);
void	init_target_position(t_stack **a, t_stack **b);
void	pos(t_stack **stack);
void	init_cost(t_stack **a, t_stack **b);
void	move_cheapest(t_stack **a, t_stack **b);
void	rotate_both(t_stack **a, t_stack **b, int *c_a, int *c_b);
void	rev_rotate_both(t_stack **a, t_stack **b, int *c_a, int *c_b);
void	rotate_a(t_stack **a, int *cost);
void	rotate_b(t_stack **b, int *cost);
int		low_i_position(t_stack **stack);
void	sort_stack(t_stack **a, t_stack **b, int len);
int		check_stack_is_sorted(t_stack *a);
void	init_index(t_stack *stack, int len);
void	creat_stack_a(t_stack **a, char **v);
int		check_stack_is_sorted(t_stack *a);
void	init_index(t_stack *stack, int len);
int		error_syntax(char *str);
void	free_error(t_stack **a);
void	free_stack(t_stack **a);
int		check_duplicte_error(t_stack *a, int x);
char	**joind_argument(int c, char **v);
char	**check_input(int c, char **v);
void	free_ptr(char **array);
#endif