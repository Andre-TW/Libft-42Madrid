/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:15:25 by andsoare          #+#    #+#             */
/*   Updated: 2025/01/17 21:25:42 by andsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_atoi(const char *p)
{
	int	sign;
	int	res;
	int	ctr;

	sign = 1;
	res = 0;
	ctr = 0;
	while (p[ctr] == ' ' || p[ctr] == '\t' || p[ctr] == '\n'
		|| p[ctr] == '\v' || p[ctr] == '\f' || p[ctr] == '\r')
		ctr++;
	if (p[ctr] == '-' || p[ctr] == '+')
	{
		if (p[ctr] == '-')
		{
			sign = -1;
			ctr++;
		}
	}
	while (p[ctr] >= '0' && p[ctr] <= '9')
	{
		res = 10 * res + (p[ctr] - '0');
		ctr++;
	}
	return (res * sign);
}
/*#include <stdio.h>

int main() {
    char s[] = "-9124";
    printf("%d", ft_atoi(s));
    return 0;
}*/
