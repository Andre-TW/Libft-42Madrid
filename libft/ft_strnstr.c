/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:20:48 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/20 16:33:13 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[c])
		{
			while (big[i + c] == little[c]
				&& little[c] != '\0' && (i + c) < len)
			{
				c++;
			}
			if (little[c] == '\0')
				return ((char *)(big + i));
			c = 0;
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
    const char *big = "hello world";
    const char *little = "world";
    size_t len = 7;  // Maximum length to search

    char *result = ft_strnstr(big, little, len);
    if (result)
        printf("Found: %s\n", result);  // Expected output: "world"
    else
        printf("Not found\n");

    return 0;
}*/
