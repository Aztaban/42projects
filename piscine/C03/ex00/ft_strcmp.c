/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:30:56 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/16 12:20:28 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(void)
{
	char str[19] = "Hello I am string.";
	char str1[19] = "Hello I am string.";
	char str2[19] = "Hello I am strong.";

	printf("%d\n", ft_strcmp(str, str1));
	printf("%d\n", ft_strcmp(str1, str2));
	return 0;
}*/
