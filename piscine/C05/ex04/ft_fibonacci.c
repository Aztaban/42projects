/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:15:54 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/22 10:31:02 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("index %d in fibonacci is %d\n", 5, ft_fibonacci(5));
	printf("index %d in fibonacci is %d\n", 1, ft_fibonacci(1));
	printf("index %d in fibonacci is %d\n", 8, ft_fibonacci(8));
	printf("index %d in fibonacci is %d\n", 0, ft_fibonacci(0));
	printf("index %d in fibonacci is %d\n", -5, ft_fibonacci(-5));
	printf("index %d in fibonacci is %d\n", 15, ft_fibonacci(15));
	return (0);
}*/
