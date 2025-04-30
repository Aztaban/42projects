/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:34:19 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/16 18:09:25 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[27] = "hey look at me. I am string";
	char dest[27];

	char *result = ft_strncpy(dest, src, 15);
	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Return check: %s\n", result);
	return (0);
}*/
