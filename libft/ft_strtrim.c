/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:35:48 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/28 17:41:16 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	st;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	st = 0;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	end = ft_strlen(s1);
	while (end > st && ft_strchr(set, s1[end -1]))
		end--;
	len = end - st;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[st], len + 1);
	return (trim);
}
