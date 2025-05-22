/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:43:00 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/14 18:22:53 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (start);
}
/*
int	main(void)
{
	char str[13] = "Hello World!";
	printf("Before :%s\n", str);
	char *p_str = ft_strupcase(str);
	printf("After  :%s\n", str);
	printf("Pointer:%s\n", p_str);
	return 0;
}*/
