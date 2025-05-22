/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:41:20 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/21 15:09:34 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("0! is %d\n", ft_iterative_factorial(0));
	printf("1! is %d\n", ft_iterative_factorial(1));
	printf("5! is %d\n", ft_iterative_factorial(5));
	printf("125! is %d\n", ft_iterative_factorial(125));

	return 0;
}*/
