/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_upercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:00:22 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/14 17:16:32 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("TEST"));
	printf("%d\n", ft_str_is_uppercase("TEST000"));
	printf("%d\n", ft_str_is_uppercase("TEST TEST"));
	printf("%d\n", ft_str_is_uppercase("TesT"));
	return 0;
}*/
