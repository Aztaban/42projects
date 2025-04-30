/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:27:14 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/19 16:19:29 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	return (number * sign);
}
/*
int	main(void)
{
	char str[] = "   ---+--+1234ab567";
	printf("Output is: %d", ft_atoi(str));
}*/
