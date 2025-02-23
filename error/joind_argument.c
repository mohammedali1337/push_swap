/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joind_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:51:03 by mgarouj           #+#    #+#             */
/*   Updated: 2025/01/31 21:16:05 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*str_join(char *s, char *append)
{
	char	*new;

	new = ft_strjoin(s, append);
	free(s);
	if (!new)
		return (NULL);
	return (new);
}

char	*joind_v(int c, char **v)
{
	char	*joind ;
	int		i;

	joind = ft_strdup("");
	if (!joind)
		return (NULL);
	i = 0;
	while (++i < c)
	{
		if (i > 1)
		{
			joind = str_join(joind, " ");
			if (!joind)
				return (NULL);
		}
		joind = str_join(joind, v[i]);
		if (!joind)
			return (NULL);
	}
	return (joind);
}

char	**joind_argument(int c, char **v)
{
	char	*joind_argument;
	char	**result;

	joind_argument = joind_v(c, v);
	if (!joind_argument)
		return (NULL);
	result = ft_split(joind_argument);
	free(joind_argument);
	if (!result)
		return (NULL);
	return (result);
}
