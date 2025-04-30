/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:34:08 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/17 09:36:14 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;	

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (*src && j < nb)
	{
		dest[i + j] = *src;
		src++;
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int     main(void)
{
        char    dest[20] = "Hello ";
        char    str2[6] = "World";

        printf("%s", ft_strncat(dest, str2, 3));
        return 0;
}*/
