/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:24:43 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/22 19:01:47 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
int	main(void)
{
	printf("Number %d is %s\n", 1, ft_is_prime(1) ? "prime" : "not prime");
	printf("Number %d is %s\n", 101, ft_is_prime(101) ? "prime" : "not prime");
	printf("Number %d is %s\n", 10, ft_is_prime(10) ? "prime" : "not prime");
	printf("Number %d is %s\n", 9, ft_is_prime(9) ? "prime" : "not prime");
	printf("Number %d is %s\n", 13, ft_is_prime(13) ? "prime" : "not prime");
	return (0);
}*/
