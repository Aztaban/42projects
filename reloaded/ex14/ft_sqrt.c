/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:19:00 by mjusta            #+#    #+#             */
/*   Updated: 2025/05/20 18:39:19 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		left;
	int		right;
	int		mid;
	long	square;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	left = 1;
	right = nb / 2;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		square = (long)mid * mid;
		if (square == nb)
			return (mid);
		else if (square < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(360));
	printf("%d\n", ft_sqrt(169));
	printf("%d\n", ft_sqrt(189698756));
}*/
