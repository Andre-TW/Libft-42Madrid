/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:21:06 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/15 21:41:35 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dt;
	size_t	st;
	size_t	c;

	dt = 0;
	st = 0;
	i = 0;
	while (dst[dt] != '\0' && dt < size)
		dt++;
	while (src[st] != '\0')
		st++;
	if (dt >= size)
		return (size + st);
	while (src[i] != '\0' && (dt + i + 1) < size)
	{
		dst[dt + i] = src[i];
		i++;
	}
	dst[dt + i] = '\0';
	return (dt + st);
}
