/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:54:17 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/24 21:53:55 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	p1;
	unsigned char	p2;

	i = 0;
	while (i < n)
	{
		p1 = (unsigned char)s1[i];
		p2 = (unsigned char)s2[i];
		if (p1 == '\0' || p2 == '\0')
		{
			return (p1 - p2);
		}
		if (p1 != p2)
		{
			return (p1 - p2);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	char str1[] = "testando i8so";
	char str2[] = "testando isso";
	int c = ft_strncmp(str1,str2, 8);
	printf ("resultado: %d\n", c);
	return (0);

}*/
