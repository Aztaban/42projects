/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:34:19 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/14 10:07:46 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[27] = "hey look at me. I am string";
	char dest[27];

	char *result = ft_strcpy(dest, src);
	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Return check: %s\n", result);
	return (0);
}*/
