/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:15:25 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/26 19:52:38 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;
	int	ctr;

	sign = 1;
	res = 0;
	ctr = 0;
	while (nptr[ctr] == ' ' || nptr[ctr] == '\t' || nptr[ctr] == '\n'
		|| nptr[ctr] == '\v' || nptr[ctr] == '\f' || nptr[ctr] == '\r')
		ctr++;
	if (nptr[ctr] == '-' || nptr[ctr] == '+')
	{
		if (nptr[ctr] == '-')
			sign = -1;
		ctr++;
	}
	while (nptr[ctr] >= '0' && nptr[ctr] <= '9')
	{
		res = 10 * res + (nptr[ctr] - '0');
		ctr++;
	}
	return (res * sign);
}
/*#include <stdio.h>

int main() {
    char s[] = "-2147483";
    printf("%d", ft_atoi(s));
    return 0;
}*/
