/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:43:05 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/17 15:52:19 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	slen = ft_strlen(src);
	while (dest[dlen] && dlen < size)
		dlen++;
	if (dlen == size)
		return (dlen + slen);
	i = 0;
	while (src[i] && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	//dest[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int	main(void)
{
	char dest[10] = "Hello ";
	char src[] = "World of C.";

	printf("Length of string should be %d.\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
	return 0;
}*/
