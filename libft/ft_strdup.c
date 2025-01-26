/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:59:02 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/22 21:20:18 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*cpy;

	len = (ft_strlen(s) + 1);
	cpy = (char *)malloc(len);
	i = 0;
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		cpy[i] = s[i];
		i++;
	}
	return (cpy);
}
