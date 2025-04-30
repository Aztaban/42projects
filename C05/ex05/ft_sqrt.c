/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:44:25 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/22 18:21:51 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		left;
	int		right;
	int		mid;
	long	square;

	left = 0;
	right = nb;
	if (nb < 0)
		return (0);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		square = (long)mid * (long)mid;
		if (square == nb)
			return (mid);
		else if (square < nb)
			left = mid + 1;
		else
			right = mid -1;
	}
	return (0);
}
/*
int	main(void)
{
	printf("Square root of %d is %d\n", 25, ft_sqrt(25));
	printf("Square root of %d is %d\n", 1, ft_sqrt(1));
	printf("Square root of %d is %d\n", 0, ft_sqrt(0));
	printf("Square root of %d is %d\n", 250, ft_sqrt(250));
	printf("Square root of %d is %d\n", -25, ft_sqrt(-25));
	printf("Square root of %d is %d\n", 625, ft_sqrt(625));
	return (0);
}*/
