/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:00:46 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/22 20:51:52 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	b;
	size_t			i;

	i = 0;
	b = (unsigned char) c;
	p = (unsigned char *) s;
	while (i < n)
	{
		if (p[i] == b)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
