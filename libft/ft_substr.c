/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:06:13 by andsoare          #+#    #+#             */
/*   Updated: 2025/02/02 17:29:48 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int main() {
    char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    // Test the ft_substr function
    char *substring = ft_substr(str, start, len);
    if (substring) {
        printf("Original string: %s\n", str);
        printf("Substring: %s\n", substring);
        free(substring);
    } else {
        printf("Failed to allocate memory for substring.\n");
    }

    return 0;
}*/
