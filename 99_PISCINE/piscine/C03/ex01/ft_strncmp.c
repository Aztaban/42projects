/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:04:07 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/16 13:21:48 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (unsigned char)s1[i] == (unsigned char)s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int     main(void)
{
        char str[19] = "Hello I am string.";
        char str1[19] = "Hello I am strong.";
        char str2[19] = "Hello I Am strong.";

        printf("%d\n", ft_strncmp(str, str1, 10));
        printf("%d\n", ft_strncmp(str1, str2, 10));
        return 0;
}*/
