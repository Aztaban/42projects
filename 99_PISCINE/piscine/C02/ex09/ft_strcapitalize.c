/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:36:02 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/15 16:43:28 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	first_let;
	int	i;

	i = 0;
	first_let = 1;
	while (str[i])
	{
		if (is_lower(str[i]) || is_upper(str[i]))
		{
			if (first_let && is_lower(str[i]))
				str[i] -= 32;
			else if (!first_let && is_upper(str[i]))
				str[i] += 32;
			first_let = 0;
		}
		else if (is_numeric(str[i]))
			first_let = 0;
		else
			first_let = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[60] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s\n", str);
	char *newstr = ft_strcapitalize(str);
	printf("%s\n", str);
	printf("%s\n", newstr);	
}*/
