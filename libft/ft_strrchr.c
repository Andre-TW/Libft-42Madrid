/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:23:35 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/20 15:20:21 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cb;
	int		i;

	cb = (char)c;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == cb)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	if (cb == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	const char *tst = "hzezllo worzld";
	char ch = 'z';
	printf("%s\n", ft_strrchr(tst,ch));
	return 0;
}*/
