/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:54:56 by andsoare          #+#    #+#             */
/*   Updated: 2025/02/05 11:34:51 by andsoare         ###   ########.fr       */
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

/*int main() {
    // Test with an array of 10 integers
    int *arr = ft_calloc(10, sizeof(int));

    // Check if malloc was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Return with error code
    }

    // Print values of the array to confirm they are initialized to zero
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Don't forget to free the memory after testing
    free(arr);

    return 0;
}*/
