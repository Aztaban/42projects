/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:51:18 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/14 17:39:59 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int     main(void)
{
        printf("%d\n", ft_str_is_printable(""));
        printf("%d\n", ft_str_is_printable("TEST"));
        printf("%d\n", ft_str_is_printable("TEST\n000"));
        printf("%d\n", ft_str_is_printable("TEST TEST"));
        printf("%d\n", ft_str_is_printable("TesT"));
        return 0;
}
*/
