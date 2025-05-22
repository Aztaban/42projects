/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:00:29 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/21 21:29:18 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	double_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	count_base(char *base)
{
	int	i ;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] <= 32 || base[i] == 127)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	if (double_char(base))
		return (0);
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	parse_number(char *str, char *base, int base_len)
{
	int	sign;
	int	result;
	int	index;

	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	result = 0;
	index = is_in_base(*str, base);
	while (index != -1)
	{
		result = result * base_len + index;
		str++;
		index = is_in_base(*str, base);
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;

	base_len = count_base(base);
	if (base_len == 0)
		return (0);
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	return (parse_number(str, base, base_len));
}
/*
int	main(int argc, char **argv)
{
	char	*base;
	char	*nbr;
	int		result;

	if (argc < 3)	
		return (0);
	nbr = argv[1];
	base = argv[2];
	result = ft_atoi_base(nbr, base);
	printf("Value of \"%s\" in base \"%s\" is %d", nbr, base, result);
	return (0);
}*/
