/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:54:56 by andsoare          #+#    #+#             */
/*   Updated: 2025/02/02 14:21:38 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = (nmemb * size);
	ptr = malloc(total);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, total);
	return (ptr);
}
