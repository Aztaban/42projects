/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:00:22 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/14 14:37:18 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("test"));
	printf("%d\n", ft_str_is_alpha("test000"));
	printf("%d\n", ft_str_is_alpha("test test"));
	return 0;
}*/
