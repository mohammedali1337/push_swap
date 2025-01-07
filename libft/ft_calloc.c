/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:30:49 by mgarouj           #+#    #+#             */
/*   Updated: 2024/11/05 23:40:48 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*sp;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	sp = malloc(count * size);
	if (!sp)
		return (0);
	ft_bzero(sp, count * size);
	return (sp);
}
