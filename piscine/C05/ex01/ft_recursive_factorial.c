/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:10:16 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/21 15:21:00 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int     main(void)
{
        printf("0! is %d\n", ft_recursive_factorial(0));
	printf("1! is %d\n", ft_recursive_factorial(1));
        printf("5! is %d\n", ft_recursive_factorial(5));
        printf("125! is %d\n", ft_recursive_factorial(125));
        return 0;
}*/
