/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:00:22 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/14 15:06:00 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("0"));
	printf("%d\n", ft_str_is_numeric("test000"));
	printf("%d\n", ft_str_is_numeric("15 35"));
	printf("%d\n", ft_str_is_numeric("1535"));
	return 0;
}*/
