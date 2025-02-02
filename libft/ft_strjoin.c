/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:18:16 by andsoare          #+#    #+#             */
/*   Updated: 2025/02/02 17:26:58 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		v;

	i = 0;
	v = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
		str[v++] = s1[i++];
	i = 0;
	while (s2[i])
		str[v++] = s2[i++];
	str[v] = '\0';
	return (str);
}
/*
int main() {
    char *str1 = "Hello, ";
    char *str2 = "World!";

    // Test the ft_strjoin function
    char *result = ft_strjoin(str1, str2);
    if (result) {
        printf("Result of ft_strjoin: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
