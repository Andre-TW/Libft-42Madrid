/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:31:56 by andsoare          #+#    #+#             */
/*   Updated: 2025/02/05 11:39:20 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_str(char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static size_t	ft_count_words(char *s, char c)
{
	size_t	i;
	size_t	wcount;

	i = 0;
	wcount = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wcount++;
		i++;
	}
	return (wcount);
}

static void	ft_deallocate(char **matrix)
{
	size_t	str;

	str = 0;
	while (matrix[str])
	{
		free(matrix[str]);
		str++;
	}
	free (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	j;
	size_t	num_words;

	if (!s)
		return (NULL);
	num_words = ft_count_words((char *)s, c);
	matrix = (char **) malloc(sizeof(char *) * (num_words + 1));
	if (!matrix)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			matrix[j] = ft_substr(s, 0, count_str((char *)s, c));
			if (!matrix[j++])
				return (ft_deallocate(matrix), NULL);
			s += count_str((char *)s, c);
		}
		else
			s++;
	}
	matrix[j] = NULL;
	return (matrix);
}
// for easy compile cc -w -w -w ft_split.c ft_substr.c 
//ft_strdup.c ft_strlen.c ft_calloc.c ft_bzero.c
/*int main() {
    char *str = "Hello world, this is a test string";
    char delimiter = ' ';

    // Call the ft_split function
    char **split_str = ft_split(str, delimiter);

    // Check if ft_split returned NULL
    if (split_str == NULL) {
        printf("Memory allocation failed or invalid input.\n");
        return 1;
    }

    // Print the words in the split string
    printf("The split string is:\n");
    size_t i = 0;
    while (split_str[i]) {
        printf("split_str[%zu] = %s\n", i, split_str[i]);
        i++;
    }

    // Free the allocated memory
    ft_deallocate(split_str);

    return 0;
}*/
