/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:16:47 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/20 14:19:13 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cb;

	cb = (char)c;
	while (*s)
	{
		if (*s == cb)
		{
			return ((char *)s);
		}
		s++;
	}
	if (cb == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	const char *tst = "hello world";
	char ch = 'l';
	printf("sei la '%c' %s\n", ch, ft_strchr(tst,ch));
	return (0);
}*/
