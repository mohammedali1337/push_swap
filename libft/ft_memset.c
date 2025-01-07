/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarouj <mgarouj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:32:09 by mgarouj           #+#    #+#             */
/*   Updated: 2024/11/10 05:01:20 by mgarouj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (len == 0)
		return (b);
	i = 0;
	while (i < len)
		*(unsigned char *)(b + i++) = (unsigned char)c;
	return (b);
}
