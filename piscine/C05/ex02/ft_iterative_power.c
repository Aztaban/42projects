/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:23:38 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/22 18:05:48 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 3));   
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(5, 1));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-5, 1));
	printf("%d\n", ft_iterative_power(-5, 2));
	printf("%d\n", ft_iterative_power(-5, 3));   
	return (0);
}*/
