/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:09:26 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/15 19:22:51 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (start);
}
/*
int	main(void)
{
	char str[13] = "hELLO wORLD!";
	printf("Before :%s\n", str);
	char *p_str = ft_strlowcase(str);
	printf("After  :%s\n", str);
	printf("Pointer:%s\n", p_str);
	return 0;
}*/
