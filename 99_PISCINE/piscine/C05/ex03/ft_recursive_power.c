/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:44:22 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/22 12:08:31 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/* 
int     main(void)
{
        printf("%d\n", ft_recursive_power(5, 3));   
        printf("%d\n", ft_recursive_power(5, 2));
        printf("%d\n", ft_recursive_power(5, 1));
        printf("%d\n", ft_recursive_power(5, 0));
        printf("%d\n", ft_recursive_power(0, 0));
        printf("%d\n", ft_recursive_power(-5, 1));
        printf("%d\n", ft_recursive_power(-5, 2));
        printf("%d\n", ft_recursive_power(-5, 3));   
        return (0);
}*/
