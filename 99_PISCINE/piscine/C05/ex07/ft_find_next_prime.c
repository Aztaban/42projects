/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:47:40 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/22 19:12:57 by mjusta           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
/*
int	main(void)
{
	printf("Next prime number after %d is %d\n", 5, ft_find_next_prime(5));
	printf("Next prime number after %d is %d\n", 15, ft_find_next_prime(15));
	printf("Next prime number after %d is %d\n", -5, ft_find_next_prime(-5));
	printf("Next prime number after %d is %d\n", 127, ft_find_next_prime(127));
	printf("Next prime number after %d is %d\n", 150, ft_find_next_prime(150));

}*/
